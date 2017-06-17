/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <string>
#include "lcf_vector.h"
#include "reader_struct.h"
#include "rpg_eventcommand.h"

template <>
struct RawStruct<RPG::EventCommand> {
	static void ReadLcf(RPG::EventCommand& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const RPG::EventCommand& ref, LcfWriter& stream);
	static int LcfSize(const RPG::EventCommand& ref, LcfWriter& stream);
	static void WriteXml(const RPG::EventCommand& ref, XmlWriter& stream);
	static void BeginXml(RPG::EventCommand& ref, XmlReader& stream);
};

template <>
struct RawStruct<LcfVector<RPG::EventCommand> > {
	static void ReadLcf(LcfVector<RPG::EventCommand>& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const LcfVector<RPG::EventCommand>& ref, LcfWriter& stream);
	static int LcfSize(const LcfVector<RPG::EventCommand>& ref, LcfWriter& stream);
	static void WriteXml(const LcfVector<RPG::EventCommand>& ref, XmlWriter& stream);
	static void BeginXml(LcfVector<RPG::EventCommand>& ref, XmlReader& stream);
};

/**
 * Reads Event Command.
 */
void RawStruct<RPG::EventCommand>::ReadLcf(RPG::EventCommand& event_command, LcfReader& stream, uint32_t /* length */) {
	stream.Read(event_command.code);
	if (event_command.code != 0) {
		stream.Read(event_command.indent);
		stream.ReadString(event_command.string, stream.ReadInt());
		for (int i = stream.ReadInt(); i > 0; i--) {
			event_command.parameters.push_back(stream.ReadInt());
		}
	}
}

void RawStruct<RPG::EventCommand>::WriteLcf(const RPG::EventCommand& event_command, LcfWriter& stream) {
	stream.Write(event_command.code);
	stream.Write(event_command.indent);
	stream.WriteInt(stream.Decode(event_command.string).size());
	stream.Write(event_command.string);
	int count = event_command.parameters.size();
	stream.Write(count);
	for (int i = 0; i < count; i++)
		stream.Write(event_command.parameters[i]);
}

int RawStruct<RPG::EventCommand>::LcfSize(const RPG::EventCommand& event_command, LcfWriter& stream) {
	int result = 0;
	result += LcfReader::IntSize(event_command.code);
	result += LcfReader::IntSize(event_command.indent);
	result += LcfReader::IntSize(stream.Decode(event_command.string).size());
	result += stream.Decode(event_command.string).size();
	int count = event_command.parameters.size();
	result += LcfReader::IntSize(count);
	for (int i = 0; i < count; i++)
		result += LcfReader::IntSize(event_command.parameters[i]);
	return result;
}

void RawStruct<RPG::EventCommand>::WriteXml(const RPG::EventCommand& event_command, XmlWriter& stream) {
	stream.BeginElement("EventCommand");
	stream.WriteNode<int>("code", event_command.code);
	stream.WriteNode<int>("indent", event_command.indent);
	stream.WriteNode<std::string>("string", event_command.string);
	stream.WriteNode<LcfVector<int> >("parameters", event_command.parameters);
	stream.EndElement("EventCommand");
}

class EventCommandXmlHandler : public XmlHandler {
private:
	RPG::EventCommand& ref;
	enum {
		None,
		Code,
		Indent,
		String,
		Parameters
	} field;
public:
	EventCommandXmlHandler(RPG::EventCommand& ref) : ref(ref), field(None) {}
	void StartElement(XmlReader& stream, const char* name, const char** /* atts */) {
		if (strcmp(name, "code") == 0)
			field = Code;
		else if (strcmp(name, "indent") == 0)
			field = Indent;
		else if (strcmp(name, "string") == 0)
			field = String;
		else if (strcmp(name, "parameters") == 0)
			field = Parameters;
		else {
			stream.Error("Unrecognized field '%s'", name);
			field = None;
		}
	}
	void EndElement(XmlReader& /* stream */, const char* /* name */) {
		field = None;
	}
	void CharacterData(XmlReader& /* stream */, const std::string& data) {
		switch (field) {
			case None:
				break;
			case Code:
				XmlReader::Read<int>(ref.code, data);
				break;
			case Indent:
				XmlReader::Read<int>(ref.indent, data);
				break;
			case String:
				XmlReader::Read<std::string>(ref.string, data);
				break;
			case Parameters:
				XmlReader::Read<LcfVector<int> >(ref.parameters, data);
				break;
		}
	}
};

void RawStruct<RPG::EventCommand>::BeginXml(RPG::EventCommand& ref, XmlReader& stream) {
	stream.SetHandler(new WrapperXmlHandler("EventCommand", new EventCommandXmlHandler(ref)));
}

/**
 * Reads event commands.
 */
void RawStruct<LcfVector<RPG::EventCommand> >::ReadLcf(
	LcfVector<RPG::EventCommand>& event_commands, LcfReader& stream, uint32_t length) {
	// Event Commands is a special array
	// Has no size information. Is terminated by 4 times 0x00.
	unsigned long startpos = stream.Tell();
	unsigned long endpos = startpos + length;

	for (;;) {
		uint8_t ch;
		stream.Read(ch);
		if (ch == 0) {
			stream.Seek(3, LcfReader::FromCurrent);
			break;
		}

		if (stream.Tell() >= endpos) {
			stream.Seek(endpos, LcfReader::FromStart);
			fprintf(stderr, "Event command corrupted at %d\n", stream.Tell());
			for (;;) {
				// Try finding the real end of the event command (4 0-bytes)
				int i = 0;
				for (; i < 4; ++i) {
					stream.Read(ch);

					if (ch != 0) {
						break;
					}
				}

				if (i == 4 || stream.Eof()) {
					break;
				}
			}

			break;
		}

		stream.Ungetch(ch);
		RPG::EventCommand command;
		RawStruct<RPG::EventCommand>::ReadLcf(command, stream, 0);
		event_commands.push_back(command);
	}
}

void RawStruct<LcfVector<RPG::EventCommand> >::WriteLcf(const LcfVector<RPG::EventCommand>& event_commands, LcfWriter& stream) {
	int count = event_commands.size();
	for (int i = 0; i < count; i++)
		RawStruct<RPG::EventCommand>::WriteLcf(event_commands[i], stream);
	for (int i = 0; i < 4; i++)
		stream.WriteInt(0);
}

int RawStruct<LcfVector<RPG::EventCommand> >::LcfSize(const LcfVector<RPG::EventCommand>& event_commands, LcfWriter& stream) {
	int result = 0;
	int count = event_commands.size();
	for (int i = 0; i < count; i++)
		result += RawStruct<RPG::EventCommand>::LcfSize(event_commands[i], stream);
	result += 4;
	return result;
}

void RawStruct<LcfVector<RPG::EventCommand> >::WriteXml(const LcfVector<RPG::EventCommand>& event_commands, XmlWriter& stream) {
	LcfVector<RPG::EventCommand>::const_iterator it;
	for (it = event_commands.begin(); it != event_commands.end(); it++)
		RawStruct<RPG::EventCommand>::WriteXml(*it, stream);
}

class EventCommandVectorXmlHandler : public XmlHandler {
public:
	EventCommandVectorXmlHandler(LcfVector<RPG::EventCommand>& ref) : ref(ref) {}

	void StartElement(XmlReader& stream, const char* name, const char** /* atts */) {
		if (strcmp(name, "EventCommand") != 0)
			stream.Error("Expecting %s but got %s", "EventCommand", name);
		ref.resize(ref.size() + 1);
		RPG::EventCommand& obj = ref.back();
		stream.SetHandler(new EventCommandXmlHandler(obj));
	}
private:
	LcfVector<RPG::EventCommand>& ref;
};

void RawStruct<LcfVector<RPG::EventCommand> >::BeginXml(LcfVector<RPG::EventCommand>& obj, XmlReader& stream) {
	stream.SetHandler(new EventCommandVectorXmlHandler(obj));
}
