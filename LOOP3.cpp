#include <iostream>

using namespace std;

const long long MOD = 1000000007;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        long long cube = (long long)i * i * i % MOD; // Tính l?p phuong và chia l?y du
        sum = (sum + cube) % MOD; // C?ng vào t?ng và chia l?y du sau m?i l?n c?ng
    }

    cout << sum << endl;

    return 0;
}

