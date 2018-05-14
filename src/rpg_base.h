#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <type_traits>
#include <vector>

#include "lcf_any.h"

namespace RPG {
	class Flags_Base {

	};

	class Base {
	public:

	protected:
#if 0
		template<typename T>
		typename std::enable_if<std::is_base_of<RPG::Base, T>::value, T>::type
		json_getter(rapidjson::Value& value) const {
			// Specialisation for classes inheriting from RPG::Base
			return T(value);
		}

		template<typename T>
		typename std::enable_if<std::is_base_of<RPG::Flags_Base, T>::value, T>::type
		json_getter(rapidjson::Value& value) const {
			// Specialisation for classes inheriting from RPG::Flags_Base
			// TODO
			return T();
		}

		template<typename T>
		typename std::enable_if<!std::is_base_of<RPG::Base, T>::value &&
								!std::is_base_of<RPG::Flags_Base, T>::value &&
								!std::is_same<T, int16_t>::value &&
								!std::is_same<T, uint8_t>::value, T>::type
		json_getter(const rapidjson::Value& value) const {
			// Specialisation for types directly supported by rapidjson
			return value.Get<T>();
		}

		template<typename T>
		typename std::enable_if<std::is_same<T, int16_t>::value, int16_t>::type
		json_getter(const rapidjson::Value& value) const {
			// Specialisation for int16_t
			return static_cast<int16_t>(value.GetInt());
		}

		template<typename T>
		typename std::enable_if<std::is_same<T, uint8_t>::value, uint8_t>::type
		json_getter(const rapidjson::Value& value) const {
			// Specialisation for uint8_t
			return static_cast<uint8_t>(value.GetUint());
		}
#endif
		template<typename T>
		T getter(const std::string& key) const {
			auto it = values.find(key);

			// Lazy loading logic: When the value was not obtained yet, load it
			if (it == values.end()) {
				// Value was not obtained yet, lazy load it
				if (json_values) {
					// Fetch it from the JSON document
					auto itr = json_values->FindMember(key);
					if (itr != json_values->MemberEnd()) {
						values[key] = json_getter<typename std::decay<T>::type>(itr->value);
						// Remove the JSON value to save memory, not needed anymore
						json_getter_values->RemoveMember(itr);
						return lcf::any_cast<T>(values[key]);
					}
				}

				// Not in the JSON, assign and return the default value
				// TODO
				values[key] = typename std::decay<T>::type();
				return lcf::any_cast<T>(values[key]);
			}

			// Value was already fetched, return it
			return lcf::any_cast<T>(it->second);
		}

		template<typename T, typename U>
		T vector_getter(const std::string& key) const {
			auto it = values.find(key);

			// Lazy loading logic: When the value was not obtained yet, load it
			if (it == values.end()) {
				// Value was not obtained yet, lazy load it
				if (json_values) {
					// Fetch it from the JSON document
					auto itr = json_values->FindMember(key);
					if (itr != json_values->MemberEnd()) {
						auto arr = itr->value.GetArray();
						std::vector<U> vec;

						for (auto &v : itr->value.GetArray()) {
							vec.push_back(json_getter<U>(v));
						}

						values[key] = vec;
						// Remove the JSON value to save memory, not needed anymore
						json_values->RemoveMember(itr);
						return lcf::any_cast<T>(values[key]);
					}
				}

				// Not in the JSON, assign and return the default value
				// TODO
				values[key] = typename std::decay<T>::type();
				return lcf::any_cast<T>(values[key]);
			}

			// Value was already fetched, return it
			return lcf::any_cast<T>(it->second);
		}

		template<typename T>
		void setter(const std::string& key, typename std::decay<T>::type value) {
			values[key] = value;
		}

		mutable std::map<std::string, lcf::any> values;
        mutable bool lazy;
	};
}

#if 0
Überlegungen für Lcf vNext:
	// Die Fälle sind also: POD:
		pod_getter<>
		it = values.find("name");
		if it.end
			// Check for lazy-init
			json_value.find("name") "YEAH!"
				return json<int>["name"]; <-- sofern möglich, sonst umkopieren

			return 0; // default returner
		return *it;

		pod_setter<>
		values["name"] = val;

	// string
		string_getter<>
		it = values.find("name");
		if it.end
			// Check for lazy-init
			json_value.find("name") "YEAH!"
				// wenn nich möglich umkopieren und json löschen
				return json<string>["name"]; <-- sofern möglich, sonst umkopieren

			value["name"] = "";
		return any value["name"]; // default returner

		string_setter<>
		values["name"] = val;

	// object
		object_getter<>
		it = values.find("name");
		if it.end
			// Check for lazy-init
			json_value.find("name") "YEAH!"
				value["name"] = OBJECT(&found_json_value);
				return value["name"]

			// default initer
			value["name"] = OBJECT(); // leeres JSON
		return any value["name"]; // default returner

		object_setter<>
		// Riskant wegen lazy init
		values["name"] = val;

	// vector<pod>
		pod_vector_getter<>
		it = values.find("name");
		if it.end
			// Check for lazy-init
			json_value.find("name") "YEAH!"
				value["name"] = vector<>;
				// loop over values and populate vector<>
				// vector löschen
				return value["name"];

			// default initer
			value["name"] = vector();
		return any value["name"];

		pod_vector_setter<> // maybe?

	// vector<lcf>
		pod_vector_getter<>
		it = values.find("name");
		if it.end
			// Check for lazy-init
			json_value.find("name") "YEAH!"
				value["name"] = vector<>;
				// loop over values and populate vector<>
				// json-refs korrekt setzen!
				// vector löschen
				return value["name"];

			// default initer
			value["name"] = vector();
		return any value["name"];


	values["ID"] = 0
	values["name"] = string(title);
	values["initial_equipment"] = Equipment();
	values["skills"] = std::vector<Learning>();

	// schon in dem JSON-map-teil
	const type_handler = {
		{"name", LCF_STRING_TYPE},
		{"skills", LCF_VECTOR_LEARNING_TYPE,

	GetName()
		it = values.find("name");
		if it.end
			// Check for lazy-init
			json_value.find("name") "YEAH!"
				return json<std::string&>["name"]; <-- sofern möglich, sonst umkopieren

			// nich sicher da ref
			return ""; // default returner

	SetName(name)
		values["name"] = name;


	GetSkills() const
		it = values.find("skills");
		if it.end
			json_value.find("skills") "YEAH"
				// not a POD, needs init
				values["skills"] = std::vector<Learning>();
				for val in json_val:
					&vec_ref;
					vec_ref.push_back(Learning(&val));

				return
			// not a POD, needs init
			values["skills"] = std::vector<Learning>();
			return any_cast<&>["skills"];

	GetExperience() const
		find...........

		vec_ref.push_back(1)...

		// remove from json to save memory :)



	Actor(rapidjson::Value&) {


		for val in values:
			if val.key -> type_check:
	}

	ToJson() {

	}

	private:
		mutable Json::Value& json_values;
		mutable std::map<string, any> values;

#endif
