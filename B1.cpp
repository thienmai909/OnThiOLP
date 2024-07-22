#include <iostream>

long long SumDigit(long long n) {
    long long digit = 0;
    while (n > 0) {
        digit += n % 10;
        n /= 10;
    }
    return digit;
}

int main() {

    int n; std::cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        long long tmp; std::cin >> tmp;
        sum += tmp;
    }

    std::cout << SumDigit(sum);

    return 0;
}