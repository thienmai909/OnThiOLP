#include <iostream>
#include <map>
#include <utility>
#include <cmath>
#include <climits>

int main() {
    int n; std::cin >> n;
    long long a[100][100] = { 0 };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }

    std::map<int, long long> m = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k = i - j;
            std::map<int, long long>::iterator x = m.find(k);
            if (x != m.end()) {
                m.insert(std::make_pair(k, m[k] += a[i][j]));
            } else {
                m.insert(std::make_pair(k, a[i][j]));
            }
        }
    }

    long long maxx = LLONG_MIN;
    for (auto i : m) {
        maxx = std::max(maxx, i.second);
    }

    std::cout << maxx << std::endl;
    return 0;
}