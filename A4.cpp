#include <iostream>

int main() {
    int n; std::cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int x = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > 3 * a[j]) ++x;
        }
    }
    
    std::cout << x;
    return 0;
}