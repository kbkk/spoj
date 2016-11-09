#include <iostream>

std::string input;
int pesel[11], result, testy;

int main() {

    std::cin >> testy;

    for (int i = 0; i < testy; ++i) {
        std::cin >> input;

        for (int j = 0; j < 11; ++j) {
            pesel[j] = input[j] - '0';
        }

        result = pesel[0] * 1
                 +pesel[1] * 3
                 +pesel[2] * 7
                 +pesel[3] * 9
                 +pesel[4] * 1
                 +pesel[5] * 3
                 +pesel[6] * 7
                 +pesel[7] * 9
                 +pesel[8] * 1
                 +pesel[9] * 3
                 +pesel[10] * 1;

        result %= 10;

        std::cout << (result == 0 ? "D" : "N") << std::endl;
    }

    return 0;
}