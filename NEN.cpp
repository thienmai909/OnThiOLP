#include <iostream>

int main() {
    int n; std::cin >> n;
    
    long long max = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        long long tmp; std::cin >> tmp;
        if (tmp > max) {
            max = tmp;
            count = 0;
        }
        if (tmp == max) {
            ++count;
        }
    }

    std::cout << count;

    return 0;
}