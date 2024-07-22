#include <iostream>

int main() {
    long long n; std::cin >> n;

    long long count = 0;
    long long k = 5;

    while (k <= n) {
        count += n / k;
        k *= 5;
    }

    std::cout << count;

    return 0;
}