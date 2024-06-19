#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int n, k;

bool check(vector<ll> &a, int mid){
    ll value = 0;
    for (ll i : a){
        value += (i - mid > 0) ? i - mid : 0;
    }
    return value >= k;
}

ll TimKiemNhiPhan(vector<ll> &a){
    ll l = a[0];
    ll r = a.back();
    ll kq{};
    while(l <= r){
        ll mid = l +(r - l) / 2;
        if (check(a, mid)) {
            kq = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    return kq;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    vector<ll> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    cout << TimKiemNhiPhan(a);  
    return 0;
}