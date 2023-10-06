#include <iostream>
#include <vector>

/* ======= <function> ========== */
#include <algorithm>

template <typename T,
          typename = typename std::enable_if<std::is_integral<T>::value>::type>
std::size_t interval(T a[100], int n) {
  if (a[0] > a[n - 1]) {
    std::swap(a[0], a[n - 1]);
  }
  return std::count_if(a, a + n,
                       [&](T x) { return x >= a[0] && x <= a[n - 1]; });
}
/* ====== </function> ========== */

int main() {
  int n;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    std::vector<int> arr(n);
    for (auto i = 0; i < n; ++i) {
      std::cin >> arr[i];
    }
    std::cout << interval(arr.data(), n) << '\n';
  }
  return 0;
}