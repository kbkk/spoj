#include <iostream>

int main() {
    std::string input;
    const int diff = 'Z' - 'A' + 1;

    while(std::getline(std::cin, input))
    {
        for (int i = 0; i < input.size(); ++i) {
            if(input[i] == ' ')
                continue;

            input[i] += 3;
            if(input[i] > 'Z')
                input[i] -= diff;
        }

        std::cout << input << std::endl;
    }

    return 0;
}