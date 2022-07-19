#include <iostream>
#include <string>
#include "main.hpp"

int main() {
  Entity e = Entity(nullptr);

  auto pos1 = e.get_pos<int>();

  std::cout <<
    "x = " << std::to_string(pos1.x) << ", " <<
    "y = " << std::to_string(pos1.y) << ", " <<
    "z = " << std::to_string(pos1.z) << "\n";

  auto pos2 = e.get_pos<float>();

  std::cout <<
    "x = " << std::to_string(pos2.x) << ", " <<
    "y = " << std::to_string(pos2.y) << ", " <<
    "z = " << std::to_string(pos2.z) << "\n";

  auto pos3 = e.get_pos_str();

  std::cout << "pos3 = '" << pos3 << "'\n";

  return 0;
}
