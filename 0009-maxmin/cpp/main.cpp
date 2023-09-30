#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int max = std::max(std::max(a, b), c);
    int min = std::min(std::min(a, b), c);
    std::cout << max - min << "\n";

    return 0;
}