add_executable(FuzzerTest FuzzerTest.cpp)
# target_compile_options(FuzzerTest PRIVATE -g -O1 -fsanitize=fuzzer)
# target_link_libraries(FuzzerTest PRIVATE -fsanitize=fuzzer)