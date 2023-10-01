#include <algorithm>
#include <fstream>
#include <iostream>
#include <numeric>
#include <vector>

constexpr const char *file_in = "nrdiv.in";
constexpr const char *file_out = "nrdiv.out";

void open_filestream_or_fail(std::fstream &fs, const std::string &filename,
                             std::ios_base::openmode mode) {
  fs.open(filename, mode);
  if (!fs.is_open()) {
    std::cerr << "Error: could not open file " << filename << "\n";
    exit(EXIT_FAILURE);
  }
}

int main(int argc, char *argv[]) {
  int x;
  std::fstream in, out;
  open_filestream_or_fail(in, file_in, std::ios_base::in);
  open_filestream_or_fail(out, file_out, std::ios_base::out);

  if (in >> x) {
    std::vector<int> divisors(x);
    std::iota(divisors.begin(), divisors.end(), 1);
    auto newEnd = std::remove_if(divisors.begin(), divisors.end(),
                                 [&](int divisor) { return x % divisor != 0; });
    out << std::distance(divisors.begin(), newEnd) << "\n";
  } else {
    std::cerr << "Invalid data in " << file_in << "\n";
    exit(EXIT_FAILURE);
  }

  return 0;
}