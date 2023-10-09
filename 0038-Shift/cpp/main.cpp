#include <iostream>

/* ======= <function> ========== */
#include <algorithm>
#include <vector>
void shift(int x[], int n) {
  if (n <= 0)
    return;
  
  std::vector<int> temp(x, x + n);
  std::rotate(temp.begin(), temp.begin() + 1, temp.end());
  std::copy(temp.begin(), temp.end(), x);
  
}
/* ====== </function> ========== */

int main() {
  int N, n;
  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n) {
    int arr[n];

    for (int i = 0; i < n; i++) {
      std::cin >> arr[i];
    }

    shift(arr, n);

    for (int i = 0; i < n; i++) {
      std::cout << arr[i] << " ";
    }

    std::cout << "\n";
  }
  return 0;
}