#pragma once
#include "OutputInterface.h"
#include <gmock/gmock.h>

namespace mari {
class OutputFake : public virtual OutputInterface {
  public:
    MOCK_METHOD(void, print, (const std::string&), (override));
};
}