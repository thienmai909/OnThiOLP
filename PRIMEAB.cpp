#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using ll = long long;

std::vector<bool> SangEratosthenes () {
    const long MAX = 10000000;
    std::vector<bool> prime(MAX, true);
    prime[0] = false;
    prime[1] = false;
    for (long i = 2; i <= std::sqrt(MAX); i++) {
        if (prime[i]) {
            for (long j = i * i; j <= MAX; j += i) {
                prime[j] = false;
            }
        }
    }
    return prime;
}

int main() {

    int n; std::cin >> n;

    std::vector<bool> p = SangEratosthenes();

    while (n > 0) {
        ll a, b; std::cin >> a >> b;
        long count = 0;
        double sum = 0;
        for (long i = a; i <= b; i++) {
            if (p[i]) {
                sum = static_cast<double>(sum + i);
                count++;
            }
        }
        std::cout << std::fixed <<std::setprecision(2) << static_cast<double>(sum / count) << std::endl;
        --n;
    }
    return 0;   
}