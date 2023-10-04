#pragma once
#include "OutputInterface.h"
#include <functional>

namespace mari {

class ExampleLib {
  public:
    ExampleLib(OutputInterface& output)
        : output_(output) {}
    void print();

  private:
    std::reference_wrapper<OutputInterface> output_;
};

}