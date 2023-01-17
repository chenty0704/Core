#pragma once

#include <boost/describe.hpp>
#include <boost/json.hpp>

#define DEFINE_ENUM(E, ...) BOOST_DEFINE_ENUM_CLASS(E, __VA_ARGS__)
#define DESCRIBE_STRUCT(C, Bases, Members) BOOST_DESCRIBE_STRUCT(C, Bases, Members)

namespace describe = boost::describe;
namespace json = boost::json;

template<semiregular T>
inline string JSONSerialize(const T &obj) {
    return json::serialize(json::value_from(obj));
}

template<semiregular T>
inline T JSONDeserialize(string_view str) {
    return json::value_to<T>(json::parse(str));
}
