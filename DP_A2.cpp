#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using ll = long long;

int main() {
    ll n; std::cin >> n;
    std::vector<ll> a(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll min_a = a[0];
    ll max_a = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        max_a = std::max(max_a, a[i] - min_a);
        min_a = std::min(min_a, a[i]);
    }
    std::cout << max_a;
    return 0;
}