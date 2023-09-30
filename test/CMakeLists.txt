add_executable(ExampleTest test.cpp)

enable_testing()

find_package(GTest CONFIG REQUIRED)
target_link_libraries(ExampleTest PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)
