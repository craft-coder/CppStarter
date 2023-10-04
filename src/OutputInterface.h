#pragma once
#include <string_view>

namespace mari {
class OutputInterface {
  public:
    virtual ~OutputInterface() = default;
    virtual void print(std::string_view) = 0;
};
}