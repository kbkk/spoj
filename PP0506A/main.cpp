#include <iostream>
#include <cmath>
#include <algorithm>

int testy, punkty;

struct punkt {
    char nazwa[10];
    int x, y;
    double length;
};

void calcPunktLength(punkt &p) {
    p.length = sqrt(
            p.x * p.x +
            p.y * p.y);
}

bool compByLen(const punkt &p1, const punkt &p2)
{
    return p1.length < p2.length;
}

int main() {
    std::cin >> testy;

    for (int i = 0; i < testy; ++i)
    {
        std::cin >> punkty;
        punkt p[punkty];

        for (int j = 0; j < punkty; ++j) {
            std::cin >> p[j].nazwa >> p[j].x >> p[j].y;
            calcPunktLength(p[j]);
        }

        std::sort(p, p + punkty, compByLen);

        for (int j = 0; j < punkty; ++j)
            std::cout << p[j].nazwa << ' ' << p[j].x << ' ' << p[j].y << std::endl;

        std::cout << std::endl;
    }

    return 0;
}