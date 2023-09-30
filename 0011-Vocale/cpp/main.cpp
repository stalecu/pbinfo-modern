#include <algorithm>
#include <iostream>
#include <limits>

int main() {
  char buf[21];

  std::cin.get(buf, 21);
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::string str{buf};
  const std::string &vowels{"aeiou"};

  std::for_each(str.cbegin(), str.cend(), [&vowels](unsigned char c) {
    std::cout << static_cast<unsigned char>(
        (vowels.find(c) != std::string::npos) ? std::toupper(c) : c);
  });
  std::cout << '\n';

  return 0;
}