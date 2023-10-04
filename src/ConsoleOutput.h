#pragma once
#include "OutputInterface.h"
#include <iostream>

namespace mari {
class ConsoleOutput : public virtual OutputInterface {
  public:
    void print(std::string_view s) override {
      std::cout << s;
    };
};
}