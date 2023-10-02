#include <iostream>
#include <string>

/* ======= <function> ========== */
void oglindit(int n, int &rev) {
  rev = 0;
  for (; n != 0; n /= 10) {
    rev = rev * 10 + n % 10;
  }
}
/* ====== </function> ========== */

int main() {
  unsigned int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    int rev;
    oglindit(n, rev);
    std::cout << rev << std::endl;
  }
  return 0;
}