#include <cstdint>
#include <iostream>

class Shared {
  static uint32_t staticValue;
public:

  size_t value;

  Shared(): value(64) {std::wclog << L"User-defined constructor\n";}
  Shared(uint32_t arg): value(64) {std::wclog << L"User-defined constructor with value: " << arg << '\n';}
  Shared([[maybe_unused]] const Shared& other) { std::wclog << L"User-defined copy-constructor\n";}
  
  // assignment
  // move
  // operator=

  static uint32_t staticMethod() {
    std::wclog << L"StaticMethod\n";
    return staticValue;
  }

  uint32_t getMethod() const {
    std::wclog << L"Get Method\n";
    return value;
  }

  void setMethod(size_t arg) {
    std::wclog << L"Set Method. Value: " 
               << arg << '\n';
  }
  
};

uint32_t Shared::staticValue = 32;
