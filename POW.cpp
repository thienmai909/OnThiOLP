#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sqr(ll a) {
    return a * a;
}

ll spow(ll a, ll n) {
    if (n == 0) return 1;
    else {
        if (n % 2 == 0) {
            return sqr(spow(a, n/2)) % 1000000007;
        }
        else {
            return (a * sqr(spow(a, (n-1)/2))) % 1000000007;
        }
    }
}

int main() {
    ll a, n, s;
    cin >> a >> n;
    s = 0;
    for (size_t i = 0; i <= n; i++) {
        s += spow(a, i);
    }
    cout << s % 1000000007;
    return 0;
}