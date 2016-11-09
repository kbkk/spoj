#include <iostream>

int testy, wystapienia[255] = {};
std::string input;

int main() {
    std::cin >> testy;

    std::cin.ignore();

    for(int i = 0; i < testy; i++)
    {
        getline(std::cin, input);

        for(int j = 0; j < input.size(); j++)
            wystapienia[input[j]]++;
    }

    for(int j = 'a'; j <= 'z'; j++)
    {
        if(wystapienia[j] != 0 && j != ' ')
            std::cout << static_cast<char>(j) << ' ' << wystapienia[j] << std::endl;
    }

    for(int j = 'A'; j <= 'Z'; j++)
    {
        if(wystapienia[j] != 0 && j != ' ')
            std::cout << static_cast<char>(j) << ' ' << wystapienia[j] << std::endl;
    }

    return 0;
}