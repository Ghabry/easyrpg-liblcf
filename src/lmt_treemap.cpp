/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_struct.h"

template <>
struct RawStruct<RPG::TreeMap> //why struct instead of class ?
{
	static void ReadLcf(RPG::TreeMap& pRef, LcfReader& pStream, uint32_t pLength);
	static void WriteLcf(const RPG::TreeMap& pRef, LcfWriter& pStream);
	static int LcfSize(const RPG::TreeMap& pRef, LcfWriter& pStream);
	static void WriteXml(const RPG::TreeMap& pRef, XmlWriter& pStream);
	static void BeginXml(RPG::TreeMap& pRef, XmlReader& pStream);
};

/**
 * Reads Map Tree.
 */
void RawStruct<RPG::TreeMap>::ReadLcf(RPG::TreeMap& pRef, LcfReader& pStream, uint32_t /* pLength */) 
{
	Struct<RPG::MapInfo>::ReadLcf(pRef.maps, pStream);
	for (int vIndex = pStream.ReadInt(); vIndex > 0; vIndex--)
	{
		pRef.tree_order.push_back(pStream.ReadInt());
	}
	pRef.active_node = pStream.ReadInt();
	Struct<RPG::Start>::ReadLcf(pRef.start, pStream);
}

void RawStruct<RPG::TreeMap>::WriteLcf(const RPG::TreeMap& pRef, LcfWriter& pStream) 
{
	Struct<RPG::MapInfo>::WriteLcf(pRef.maps, pStream);
	int vCount = pRef.tree_order.size();
	pStream.WriteInt(vCount);
	for (int vIndex = 0; vIndex < vCount; vIndex++)
	{
		stream.WriteInt(ref.tree_order[vIndex]);
	}
	pStream.WriteInt(pRef.active_node);
	Struct<RPG::Start>::WriteLcf(pRef.start, pStream);
}

int RawStruct<RPG::TreeMap>::LcfSize(const RPG::TreeMap& /* pRef */, LcfWriter& /* pStream */) 
{
	/* doesn't matter; this structure never occurs within a chunk */
	return 0;
}

void RawStruct<RPG::TreeMap>::WriteXml(const RPG::TreeMap& pRef, XmlWriter& pStream) 
{
	stream.BeginElement("TreeMap");

	stream.BeginElement("maps");
	Struct<RPG::MapInfo>::WriteXml(pRef.maps, pStream);
	stream.EndElement("maps");

	stream.BeginElement("tree_order");
	stream.Write<std::vector<int> >(pRef.tree_order);
	stream.EndElement("tree_order");

	stream.WriteNode<int>("active_node", pRef.active_node);

	stream.BeginElement("start");
	Struct<RPG::Start>::WriteXml(pRef.start, pStream);
	stream.EndElement("start");

	stream.EndElement("TreeMap");
}

class TreeMapXmlHandler : public XmlHandler 
{
	private:
		RPG::TreeMap& ref;
		bool active_node;
		bool tree_order;
	public:
		TreeMapXmlHandler(RPG::TreeMap& pRef) //: ref(pRef), active_node(false), tree_order(false) 
		{
			this->ref = pRef;
			this->active_node = false;
			this->tree_order = false;
		}

		void StartElement(XmlReader& pStream, const char* pName, const char** /* pAtts */) 
		{
			this->active_node = false;
			this->tree_order = false;
			if (strcmp(pName, "maps") == 0)
			{
				Struct<RPG::MapInfo>::BeginXml(this->ref.maps, pStream);
			}
			else if (strcmp(pName, "tree_order") == 0)
			{
				this->tree_order = true;
			}
			else if (strcmp(pName, "active_node") == 0)
			{
				this->active_node = true;
			}
			else if (strcmp(pName, "start") == 0)
			{
				Struct<RPG::Start>::BeginXml(this->ref.start, pStream);
			}
			else 
			{
				stream.Error("Unrecognized field '%s'", pName);
			}
		}
		void EndElement(XmlReader& /* stream */, const char* /* name */) 
		{
			this->active_node = false;
			this->tree_order = false;
		}
		void CharacterData(XmlReader& /* stream */, const std::string& pData) 
		{
			if (this->active_node)
			{
				XmlReader::Read<int>(this->ref.active_node, pData);
			}
			if (this->tree_order)
			{
				XmlReader::Read<std::vector<int> >(this->ref.tree_order, pData);
			}
		}
};

void RawStruct<RPG::TreeMap>::BeginXml(RPG::TreeMap& pRef, XmlReader& pStream) 
{
	pStream.SetHandler(new WrapperXmlHandler("TreeMap", new TreeMapXmlHandler(pRef)));
}
