#include <iostream>

int main() {
    char znak;
    int a, b, rejestr[10];

    while(std::cin >> znak >> a >> b)
    {
        if(znak == 'z')
            rejestr[a] = b;
        else if(znak == '+')
            std::cout << rejestr[a] + rejestr[b];
        else if(znak == '-')
            std::cout << rejestr[a] - rejestr[b];
        else if(znak == '*')
            std::cout << rejestr[a] * rejestr[b];
        else if(znak == '/')
            std::cout << rejestr[a] / rejestr[b];
        else if(znak == '%')
            std::cout << rejestr[a] % rejestr[b];

        std::cout << std::endl;
    }

    return 0;
}