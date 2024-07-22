#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int m, n; std::cin >> m >> n;
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    std::vector<std::vector<int>> dp(m, std::vector<int>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            std::cin >> matrix[i][j];
        }
    }

    dp = matrix;
    
    for (int i = 1; i < n; i++){
        dp[0][i] = dp[0][i - 1] + matrix[0][i];
    }
    for (int i = 1; i < m; i++){
        dp[i][0] = dp[i - 1][0] + matrix[i][0];
    }

    for (int i = 1; i < m; i++){
        for (int j = 1; j < n; j++){
            dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]) + matrix[i][j];
        }
    }

    std::cout << dp[m-1][n-1];
    
    return 0;
}