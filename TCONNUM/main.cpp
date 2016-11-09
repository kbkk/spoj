#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

std::string input;
long long int inBase, outBase, n, testy;

static char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {

    std::cin >> testy;
    for (int i = 0; i < testy; ++i)
    {
        std::cin >> input;
        std::cin >> inBase;
        std::cin >> outBase;

        n = std::strtol(input.c_str(), NULL, inBase);
        /* std::cout << "outbase: " << outBase;
         std::cout << std::setbase(outBase);*/

        long long int base = outBase;
        long long int value = n;
        char buf[(sizeof(long long int) << 3) + 1];
        char *ptr;

        ptr = buf + sizeof(buf) - 1;
        *ptr = '\0';

        do {
            *--ptr = digits[value % base];
            value /= base;
        } while (ptr > buf && value);

        std::cout << ptr << std::endl;
    }


    return 0;
}