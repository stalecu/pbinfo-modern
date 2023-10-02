#include <iostream>
#include <string>

/* ======= <function> ========== */
int oglindit(int n) {
  int rev = 0;
  for (; n != 0; n /= 10) {
    rev = rev * 10 + n % 10;
  }
  return rev;
}
/* ====== </function> ========== */

int main() {
  unsigned int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    int rev = oglindit(n);
    std::cout << rev << std::endl;
  }
  return 0;
}