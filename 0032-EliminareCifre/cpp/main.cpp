#include <iostream>

/* ======= <function> ========== */
#include <algorithm>
#include <string>

void P(int &n, int c) {
    std::string num{std::to_string(n)};
    std::string result;
    c = static_cast<unsigned char>('0' + c);

    /* Doar 90 de puncte, signal 11 la #2
    num.erase(std::remove(num.begin(), num.end(), digit), num.end());
    n = std::stoi(num);
    */
    
    for (char digit : num) {
        if (digit != c) {
            result +=  digit;
        }
    }
    n = (result.empty() ? 0 : std::stoi(result));
}
/* ====== </function> ========== */

int main() {
  int n, c;

  // Asta e doar pentru a testa soluția
  // (delimitat clar mai sus cu <function>).
  while (std::cin >> n >> c) {
    P(n, c);
    std::cout << n << '\n';
  }
  return 0;
}