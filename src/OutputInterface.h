#pragma once
#include <string>

namespace mari {
class OutputInterface {
  public:
    virtual ~OutputInterface() = default;
    virtual void print(const std::string&) = 0;
};
}