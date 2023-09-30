#include <iostream>
#include <numeric>

int main() {
  // Știu s-o fac în mod normal cu while și n /= 10, am vrut doar să arăt
  // o rezolvare alternativă într-o singură linie. :p
  // Pot argumenta că soluția mea poate să ia numere mult, mult, mult mai mari 
  // (cu siguranță peste 2 miliarde) și deci e mai versatilă.
  std::string str;
  std::cin >> str;

  int suma = std::accumulate(std::begin(str), std::end(str), 0,
                             [](int acc, char c) { return acc + (c - '0'); });

  std::cout << suma << "\n";

  return 0;
}