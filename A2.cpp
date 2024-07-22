#include <iostream>

int main() {
    int n; std::cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++) {
        long tmp; std::cin >> tmp;
        if ((tmp * tmp * tmp) % 21 == 0) ++x;
    }

    std::cout << x << std::endl;
    return 0;
}