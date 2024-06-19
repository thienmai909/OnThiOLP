#include <iostream>
using namespace std;
typedef long long ll;

ll NhiPhan(ll n, ll k) {
    ll l = 1;
    ll r = n*k;

    while (l < r) {
        ll mid = (l + r) / 2;
        ll count = mid / n;

        if (mid - count >= k) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    return r;
}

int main() {
    ll n, k;
    cin >> n >> k;

    cout << NhiPhan(n, k);
    return 0;
}
