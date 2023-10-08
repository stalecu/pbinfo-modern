#include <iostream>
#include <string>

/* ======= <function> ========== */
#include <algorithm>
#include <numeric>
#include <vector>

int count(double a[], int n) {
  std::vector<double> arr(a, a + n);
  const auto sum =
      std::accumulate(std::begin(arr), std::end(arr), static_cast<double>(0.0));
  const double average = sum / arr.size();
  return std::count_if(std::begin(arr), std::end(arr),
                       [&](double x) { return x >= average; });

  /* Altă abordare:
    auto partition_iter = std::partition(arr.begin(), arr.end(),
                                         [&](double x) { return x < average; });
    return std::distance(partition_iter, arr.end());
  */
}
/* ====== </function> ========== */

int main() {
  double n;
  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    std::vector<double> v(n);
    for (auto &elem : v) {
      std::cin >> elem;
    }
    std::cout << count(v.data(), n) << "\n";
  }
  return 0;
}