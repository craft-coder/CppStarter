add_library(ExampleLib ExampleLib.cpp)
target_include_directories(ExampleLib PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_compile_features(ExampleLib PUBLIC cxx_std_20)


add_executable(Example main.cpp)
target_link_libraries(Example PRIVATE ExampleLib)