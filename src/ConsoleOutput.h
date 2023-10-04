#pragma once
#include "OutputInterface.h"
#include <iostream>

namespace mari {
class ConsoleOutput : public virtual OutputInterface {
  public:
    void print(const std::string& s) override {
      std::cout << s;
    };
};
}