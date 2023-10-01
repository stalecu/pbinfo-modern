#include <iostream>
#include <string>

int main() {
  std::string input;

  std::getline(std::cin, input);

  for (auto it = input.begin(); it != input.end(); ++it) {
    auto dist = std::distance(it, input.end());
    auto substr = input.substr(0, dist);
    std::cout << substr << "\n";
  }

  for (auto it = input.rbegin(); it != input.rend(); ++it) {
    auto dist = std::distance(it, input.rend());
    auto substr = input.substr(input.size() - dist);
    std::cout << substr << "\n";
  }
  return 0;
}