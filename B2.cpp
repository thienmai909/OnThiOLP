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
    long long a[100] = { 0 };

    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }

    long long count = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if ((SumDigit(a[i]) + SumDigit(a[j])) % 9 == 0){
                ++count;
            }
        }
    }

    std::cout << count;

    return 0;
}