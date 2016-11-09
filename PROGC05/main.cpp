#include <iostream>

int main() {
    std::string input;
    char omit;

    while(std::cin >> omit >> input)
    {
        for (int i = 0; i < input.size(); ++i) {
            if(input[i] != omit)
                std::cout << input[i];
        }

        std::cout << std::endl;
    }

    return 0;
}