#include <iostream>

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
void sub(int n, int &a, int &b) {
  a = 0;
  b = 0;

  for (int i = n - 1; i >= 2; --i) {
    if (is_prime(i)) {
      if (a == 0) {
        a = i;
      } else if (b == 0) {
        b = i;
        break;
      }
    }
  }
}
/* ====== </function> ========== */

int main() {
  unsigned int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    int a, b;
    sub(n, a, b);
    std::cout << a << " " << b << std::endl;
  }
  return 0;
}