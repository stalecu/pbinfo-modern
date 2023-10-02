#include <iostream>
#include <string>

/* ======= <function> ========== */
void sum_cif(int num, int &sum) {
  sum = 0;
  for (; num > 0; sum += num % 10, num /= 10);
}
/* ====== </function> ========== */

int main() {
  unsigned int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    int sum;
    sum_cif(n, sum);
    std::cout << sum << std::endl;
  }
  return 0;
}