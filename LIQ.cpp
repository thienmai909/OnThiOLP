#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n; std::cin >> n;
    std::vector<int> a(n, 0);
    for (int i = 0; i < n; i++) std::cin >> a[i];

    std::vector<int> dp(n, 1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                dp[i] = std::max(dp[i], dp[j]+1);
            }
        }
    }

    std::cout << *std::max_element(dp.begin(), dp.end());

    return 0;
}