#include <iostream>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

long long lcm (long long a, long long b) {
    return (a / gcd(a, b) * b);
}

int main() {
    int n; long long k; std::cin >> n >> k;
    long long a[100];
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (lcm(a[i], a[j]) <= k) ++count;
        }
    }
    std::cout << count;
    return 0;
}