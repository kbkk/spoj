#include <iostream>
#include <iomanip>

float input;
int testy;

void printfloat(float f)
{
    const unsigned char * pf = reinterpret_cast<const unsigned char*>(&f);

    for (int i = sizeof(float)-1; i >= 0; --i)
        std::cout << std::hex << (int) pf[i] << ' ';

    std::cout << std::endl;
}

int main() {

    std::cin >> testy;

    for (int i = 0; i < testy; ++i) {
        std::cin >> input;
        printfloat(input);
    }

    return 0;
}