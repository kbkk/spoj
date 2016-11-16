#include <iostream>

int main() {
    int a, b = 0;

    while(std::cin >> a)
    {
        b += a;
        std::cout << b << std::endl;
    }

    return 0;
}