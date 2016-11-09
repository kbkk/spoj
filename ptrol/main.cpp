#include <iostream>

int testy, stackSize;

int main() {
    std::cin >> testy;

    for (int i = 0; i < testy; ++i)
    {
        std::cin >> stackSize;
        int stack[stackSize];

        for (int j = 0; j < stackSize; ++j) {
            std::cin >> stack[j];
        }

        for (int j = 1; j < stackSize; ++j) {
            std::cout << stack[j] << ' ';
        }

        std::cout << stack[0] << ' ' << std::endl;
    }

    return 0;
}