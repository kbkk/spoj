#include <iostream>

std::string input;
int testy, count;

int main() {
    char prevChar;
    std::cin >> testy;
    std::cin.ignore();

    for (int i = 0; i < testy; ++i) {
        std::getline(std::cin, input);
        prevChar = 0;

        for (int j = 0, k = 0; j <= input.size(); ++j, ++k) {
            if(prevChar && input[j] != prevChar) {

                std::cout << prevChar;

                if(k == 2)
                    std::cout << prevChar;
                else if(k > 2)
                    std::cout << k;

                k = 0;
            }

            prevChar = input[j];
        }

        std::cout << std::endl;
    }

    return 0;
}