cmake_minimum_required (VERSION 3.22)

project (ClangExample LANGUAGES CXX)

include(CMakePrintHelpers)
cmake_print_variables(CMAKE_CXX_STANDARD)

add_subdirectory(src)
add_subdirectory(fakes)
add_subdirectory(test)