#include <stdexcept>
#include <string>

using namespace std;

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  auto name = string((char *)data, size);

  if (name.size() < 30) {
    return 1;
  }

  if (name.substr(1, 6) == "Marius") {
    throw runtime_error("WOW!!!");
  }

  return 0;
}

int main() {
  return 0;
}