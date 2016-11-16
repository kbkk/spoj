#include <iostream>

int main() {
    char znak;
    int a, b;

    while(std::cin >> znak >> a >> b)
    {
        if(znak == '+')
            std::cout << a + b;
        else if(znak == '-')
            std::cout << a - b;
        else if(znak == '*')
            std::cout << a * b;
        else if(znak == '/')
            std::cout << a / b;
        else if(znak == '%')
            std::cout << a % b;

        std::cout << std::endl;
    }

    return 0;
}