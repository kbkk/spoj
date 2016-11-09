#include <iostream>
#include <string>

#define STACK_MAX 10
int stack[STACK_MAX];
int currentEl = -1;

bool stack_push(int el)
{
    if(++currentEl < STACK_MAX) {
        stack[currentEl] = el;
        return true;
    }

    return false;
}

void stack_pop()
{
    if(currentEl == -1) {
        std::cout << ":(" << std::endl;
        return;
    }

    std::cout << stack[currentEl] << std::endl;
    currentEl--;
}

int main()
{
    std::string input;
    int temp; // rip stoi

    while(std::cin >> input)
    {
        if(input == "+") {
            std::cin >> temp;
            std::cout << (stack_push(temp) ? ":)" : ":(") << std::endl;
        }
        else if(input == "-")
        {
            stack_pop();
        }
    }

    return 0;
}