find_package(GTest REQUIRED CONFIG)

add_executable(CoreTest Core/JSONTest.cpp)
target_link_libraries(CoreTest PRIVATE GTest::gtest_main Core)
