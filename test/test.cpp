#include "ExampleLib.h"
#include "OutputFake.h"
#include <gtest/gtest.h>

using namespace ::testing;
using namespace ::mari;

TEST(Example, Test) {
    OutputFake output;
    ExampleLib example(output);

    EXPECT_CALL(output, print("Hello world\n"));

    example.print();
}