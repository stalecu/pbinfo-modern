#include <cctype>
#include <iostream>
#include <string>

unsigned char upper(char c) {
  char ch = c;
  ch -= (c >= 'a' && c <= 'z') ? ('a' - 'A') : 0;
  
  return static_cast<unsigned char>(ch);
}

int main() {
  std::string input;

  std::getline(std::cin, input);

  for (auto it = input.begin(); it != input.end(); ++it) {
    if (it == input.begin() || std::next(it) == input.end()) {
      *it = upper(*it);
    } else if (*it == ' ') {
      *std::prev(it) = upper(*std::prev(it));
      *std::next(it) = upper(*std::next(it));
    }
  }
  std::cout << input << "\n";

  return 0;
}