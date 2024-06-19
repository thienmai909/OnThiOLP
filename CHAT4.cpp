#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll m, n, k;

ll NhoNhat(ll mid){
    ll dem = 0;
    for (int i = 1; i <= m; i++){
        dem += min(n, mid/i);
    }
    return dem;
}

ll ChatNhiPhan(){
    ll l = 1;
    ll r  = m*n;
    while(l <= r){
        ll mid = l + (r - l)/2;
        ll cnt = NhoNhat(mid);
        if (cnt < k){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return l;
}

int main(){
    cin >> m >> n >> k;
    cout << ChatNhiPhan();
    return 0;
}