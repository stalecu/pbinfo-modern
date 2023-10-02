#include <iostream>
#include <string>

/* ======= <function> ========== */
bool is_prime(unsigned int num) {
  if (num <= 3) return num > 1;
  if (num % 2 == 0 || num % 3 == 0) return false;
    
  for (unsigned int i = 5; i * i <= num; i += 6)
    if (num % i == 0 || num % (i + 2) == 0) return false;

  return true;
}

void sum_div_prim(int n, int &sum) {
  sum = 0;
  if (is_prime(n)) {
    sum = n;
    return;
  }

  for (std::size_t i = 2; i * i <= n; ++i) {
    if (n % i != 0)
      continue;
    sum += (is_prime(i) ? i : 0);
    sum += (i != n / i && is_prime(n / i) ? n / i : 0);
  }
}
/* ====== </function> ========== */

int main() {
  unsigned int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    int sum;
    sum_div_prim(n, sum);
    std::cout << sum << std::endl;
  }
  return 0;
}