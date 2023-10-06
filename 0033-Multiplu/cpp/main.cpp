#include <iostream>
#include <vector>

/* ======= <function> ========== */
#include <algorithm>
#include <type_traits>

// Asta este exclusiv să dau show off la C++11
template <typename T, std::size_t N,
          typename = typename std::enable_if<std::is_integral<T>::value>::type>
std::size_t multiplu(T (&a)[N], int n, int k) {
  return std::count_if(a, a + n,
                       [k](T elem) { return elem % k == 0 && elem % 10 == k; });
}
/* ====== </function> ========== */

template <typename T,
          typename = typename std::enable_if<std::is_integral<T>::value>::type>
std::size_t multiplu(const T *a, int n, int k) {
  return std::count_if(a, a + n,
                       [k](T elem) { return elem % k == 0 && elem % 10 == k; });
}

int main() {
  int n, k;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n >> k) {
    std::vector<int> arr(n);
    for (auto i = 0; i < n; ++i) {
      std::cin >> arr[i];
    }
    std::cout << multiplu(arr.data(), n, k) << '\n';
  }
  return 0;
}