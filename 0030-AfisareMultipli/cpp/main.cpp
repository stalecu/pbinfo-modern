#include <iostream>

/* ======= <function> ========== */

/* Varianta lame:
void sub(int n, int k) {
    int count = 0;
    int num = n * k;

    while (count < n) {
        std::cout << num << " ";
        num -= k;
        count++;
    }
    std::cout << std::endl;
}
*/

// Varianta enlightened:
#include <algorithm>
#include <iterator>
#include <vector>
void sub(unsigned int n, unsigned int k) {
  std::vector<unsigned int> numereDivizibile;
  std::ostream_iterator<unsigned int> out(std::cout, " ");
  unsigned int current = k * n;

  std::generate_n(out, n, [k, &current]() mutable {
    while (current % k != 0) {
      --current;
    }
    return current--;
  });

  std::copy(numereDivizibile.rbegin(), numereDivizibile.rend(), out);
  std::cout << '\n';
}

/* ====== </function> ========== */

int main() {
  unsigned int n, k;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n >> k) {
    sub(n, k);
  }
  return 0;
}