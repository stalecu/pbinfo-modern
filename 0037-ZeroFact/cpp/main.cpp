#include <iostream>

/* ======= <function> ========== */
int nz(int n) {
  int count = 0;
  for (; n >= 5; n /= 5)
    count += n / 5;

  return count;
}
/* ====== </function> ========== */

int main() {
  int n;
  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    std::cout << nz(n) << "\n";
  }
  return 0;
}