include(CMakeFindDependencyMacro)

set(Boost_NO_WARN_NEW_VERSIONS ON)
find_dependency(Boost REQUIRED COMPONENTS json)

include(${CMAKE_CURRENT_LIST_DIR}/CoreTargets.cmake)
