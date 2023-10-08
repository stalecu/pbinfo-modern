#include <iostream>
#include <string>

/* ======= <function> ========== */
bool is_prime(unsigned int num) {
  if (num <= 3)
    return num > 1;
  if (num % 2 == 0 || num % 3 == 0)
    return false;

  for (unsigned int i = 5; i * i <= num; i += 6)
    if (num % i == 0 || num % (i + 2) == 0)
      return false;

  return true;
}

int i_prim(int n) {
  if (is_prime(n)) {
    return 0;
  }

  int p1 = n, p2 = n;

  while (!is_prime(p1)) {
    p1--;
  }

  while (!is_prime(p2)) {
    p2++;
  }

  return p2 - p1;
}
/* ====== </function> ========== */

int main() {
  int n;
  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    std::cout << i_prim(n) << "\n";
  }
  return 0;
}