#include <iostream>

/* ======= <function> ========== */
#include <algorithm>
#include <string>

int cmmnr(int num) {
  std::string numStr = std::to_string(num);

  std::sort(numStr.begin(), numStr.end(), std::less<char>());

  auto nonzero_digit = std::find_if(numStr.begin(), numStr.end(),
                                    [](char c) { return c != '0'; });

  if (nonzero_digit != numStr.end()) {
    std::iter_swap(numStr.begin(), nonzero_digit);
  }

  return std::stoi(numStr);
}

/* ====== </function> ========== */

int main() {
  unsigned int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    int rev = cmmnr(n);
    std::cout << rev << std::endl;
  }
  return 0;
}