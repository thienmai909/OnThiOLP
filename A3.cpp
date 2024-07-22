#include <iostream>

int main() {
    int n, k; std::cin >> n >> k;

    int a[100];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int x = 0;
    for (int i = 0; i < n-k; i++) {
        if (a[i] > a[i+k]){
            ++x;
        }
    }

    std::cout << x;

    return 0;
}