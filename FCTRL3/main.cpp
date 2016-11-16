#include <iostream>
#include <string>

int silnia(int n)
{
    if(n <= 1)
        return 1;

    return n * silnia(n-1);
}

int main() {
    int testy, n;
    std::string input;
    std::cin >> testy;

    for (int i = 0; i < testy; ++i) {
        std::cin >> input;

        if(input.length() >= 2) {
            std::cout << "0 0" << std::endl;
            continue;
        }

        n = input[0] - '0';
        n = silnia(n) % 100;
        std::cout << n / 10 << ' ' << n % 10 << std::endl;
    }

    return 0;
}