#include <iostream>
#include <string>

/* ======= <function> ========== */
#include <algorithm>
#include <string>

int cmmnr(int num) {
    std::string numStr = std::to_string(num);
    std::sort(numStr.begin(), numStr.end(), std::greater<char>());
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