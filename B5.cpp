#include <iostream>

int CountUoc(long long n){
    int count = 0;
    for (int i = 1; i * i <= n; ++i){
        if (n % i == 0){
            ++count;
            int j = n / i;
            if (j != i) ++count;
        }
    }
    return count;
}

int main() {
    int n; std::cin >> n;
    long long a[100] = { 0 };
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if ((CountUoc(a[i]) + CountUoc(a[j])) % 7 == 0) ++count;
        }
    }
    
    std::cout << count;
    return 0;
}