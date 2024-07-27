#include <iostream>
#include <vector>

int main() {
    int n; std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

   

    std::vector<long long> dp(n, 0);

    dp[0] = a[0];
    dp[1] = std::max(a[0], a[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = std::max(dp[i-1], dp[i-2] + a[i]);
    }
    
    
    std::cout << dp[n-1];
    return 0;
}