find_package(GTest REQUIRED)

add_executable(SystemTest Core/SystemTest.cpp)
target_link_libraries(SystemTest PRIVATE GTest::gtest_main Core)
