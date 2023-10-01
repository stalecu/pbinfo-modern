#include <iostream>
#include <string>

/* ======= <function> ========== */

int prim(unsigned int n) {
  if (n == 2 || n == 3) {
    return 1;
  }

  if (n <= 1 || n % 2 == 0 || n % 3 == 0) {
    return 0;
  }

  for (std::size_t i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return 0;
    }
  }

  return 1;
}
/* ====== </function> ========== */

int main() {
  unsigned int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    std::cout << prim(n) << std::endl;
  }
  return 0;
}