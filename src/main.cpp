#include "ExampleLib.h"
#include "ConsoleOutput.h"

int main() {
    using namespace mari;
    
    ConsoleOutput output;
    ExampleLib exampleLib(output);
    
    exampleLib.print();

    return 0;
}