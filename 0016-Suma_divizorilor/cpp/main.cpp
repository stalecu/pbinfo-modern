#include <iostream>
#include <string>

/* ======= <function> ========== */
unsigned long long sum_div(unsigned int n) {
  unsigned long long sum = 0;
  for (std::size_t i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      sum += i;
      if (n / i != i) {
        sum += (n / i);
      }
    }
  }

  return sum;
}
/* ====== </function> ========== */

int main() {
  unsigned int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    std::cout << sum_div(n) << std::endl;
  }
  return 0;
}