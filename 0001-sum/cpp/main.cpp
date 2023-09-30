#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

constexpr const char *file_in = "sum.in";
constexpr const char *file_out = "sum.out";

void open_filestream_or_fail(std::fstream &fs, const std::string &filename,
                             std::ios_base::openmode mode) {
  fs.open(filename, mode);
  if (!fs.is_open()) {
    std::cerr << "Error: could not open file " << filename << "\n";
    exit(EXIT_FAILURE);
  }
}

int main(int argc, char *argv[]) {
  int a, b;
  std::fstream in, out;
  open_filestream_or_fail(in, file_in, std::ios_base::in);
  open_filestream_or_fail(out, file_out, std::ios_base::out);

  if (in >> a >> b) {
    out << (a + b) << "\n";
  } else {
    std::cerr << "Invalid data in " << file_in << "\n";
    exit(EXIT_FAILURE);
  }

  return 0;
}