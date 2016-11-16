#include <iostream>

int main() {
    int testy, n;
    std::cin >> testy;

    for (int i = 0; i < testy; ++i) {
        std::cin >> n;
        std::cout << n*n << std::endl;
    }

    return 0;
}