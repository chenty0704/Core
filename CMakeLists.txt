cmake_minimum_required(VERSION 3.25)

project(Core
        VERSION 1.0
        DESCRIPTION "Core library for C++ language"
        HOMEPAGE_URL "https://github.com/chenty0704/Core"
        LANGUAGES CXX)

set(Boost_NO_WARN_NEW_VERSIONS ON)
find_package(Boost REQUIRED COMPONENTS json)

add_subdirectory(Headers)
add_subdirectory(Tests)
