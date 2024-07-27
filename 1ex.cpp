#include <iostream>

int main() {

    int n; std::cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int b[100] = { 1 };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++){
            if (a[j] < a[i]) {
                b[i] = std::max(b[i], b[j] + 1);
            }
        }
    }

    std::cout << b[n - 1] << std::endl;

    return 0;
}