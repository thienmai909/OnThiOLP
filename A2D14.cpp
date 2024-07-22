#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <climits>

int main() {
    int n; std::cin >> n;
    std::vector<std::vector<long long>> a(n, std::vector<long long>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }

    std::map<int, long long> x = {};
    std::map<int, long long>::iterator z;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k = i + j;
            z = x.find(k);
            if (z != x.end()) {
                x.insert(std::make_pair(k, x[k] += a[i][j]));
            } else {
                x.insert(std::make_pair(k, a[i][j]));
            }
        }
    }

    long long max = LLONG_MIN;
    for (auto i : x) {
        max = std::max(max, i.second);
    }

    std::cout << max;
    /*
        a11 a12 a13 a14
        a21 a22 a23 a24
        a31 a32 a33 a34
        a41 a42 a43 a44

        - a11                   = 2
        - a12 + a21             = 3
        - a13 + a22 + a31       = 4
        - a14 + a23 + a32 + a41 = 5
        - a24 + a33 + a42       = 6
        - a34 + a43             = 7
        - a44                   = 8
    */

    return 0;
}