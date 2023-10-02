#include <iostream>

/* ======= <function> ========== */
#include <algorithm>
#include <string>

long nr_cif_zero(int num) {
  std::string numStr = std::to_string(num);
  return std::count(std::begin(numStr), std::end(numStr), '0');
}

/* ====== </function> ========== */

int main() {
  unsigned int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    int rev = nr_cif_zero(n);
    std::cout << rev << std::endl;
  }
  return 0;
}