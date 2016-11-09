#include <iostream>
#include <algorithm>
#include <cstring>

int testy;
char s1[1024], s2[1024];

char* string_merge(char *, char *);

char *string_merge(char *s1, char *s2) {
    int len = std::min(std::strlen(s1), std::strlen(s2));
    char *result = (char *) malloc((size_t) (len * 2 + 1));

    int j = 0;
    for (int i = 0; i < len; ++i, j += 2)
    {
        result[j] = s1[i];
        result[j+1] = s2[i];
    }

    result[len * 2] = 0;

    return result;
}

int main() {

    std::cin >> testy;
    char *s;

    for (int i = 0; i < testy; ++i) {
        std::cin >> s1;
        std::cin >> s2;

        s = string_merge(s1, s2);

        std::cout << s << std::endl;
    }

    return 0;
}