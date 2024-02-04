#include <iostream>
#include <cmath>

int main() {
    int m, d, k, c;
    std::cin >> m >> d >> k >> c;

    int durability = d;
    int goldNeeded = 0;

    for (int i = 1; i <= m; ++i) {
        if (durability <= 0) {
            std::cout << -1 << std::endl; // Sword is unrepairable
            return 0;
        }

        durability -= k;

        if (durability <= 0) {
            goldNeeded += c;
            durability = d;
        }
    }

    std::cout << goldNeeded << std::endl;

    return 0;
}
