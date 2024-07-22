#include <iostream>

int main() {
    int n, x; std::cin >> n >> x;
    int a[100];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == x) {
                ++k;      
            }
        }
    }

    std::cout << k;
    return 0;
}