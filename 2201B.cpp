#include <iostream>
#include <vector>
#include <climits>


int main() {
    int n; std::cin >> n;
    std::vector<int> a(n, 0);
    for (int i = 0; i < n; i++)  std::cin >> a[i];

    std::vector<int> dp(n, INT_MAX);

    if (n == 1) {
        std::cout << 0;
        return 0;
    }

    dp[0] = 0;
    dp[1] = std::abs(a[1] - a[0]);

    for (int i = 2; i < n; i++) {
        dp[i] = dp[i-1] + std::abs(a[i] - a[i-1]);
        dp[i] = std::min(dp[i], dp[i-2] + 3 * std::abs(a[i] - a[i-2]));
    }

    std::cout << dp[n-1];
    return 0;
}
