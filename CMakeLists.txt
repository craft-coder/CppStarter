cmake_minimum_required (VERSION 3.22)

project (ClangExample LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 20)

add_subdirectory(src)
add_subdirectory(fakes)
add_subdirectory(test)