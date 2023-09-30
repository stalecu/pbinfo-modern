#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int suma{};
    
    int numar;

    while (n-- && std::cin >> numar) {
        suma += numar;
    }

    std::cout << suma << "\n";

    return 0;
}