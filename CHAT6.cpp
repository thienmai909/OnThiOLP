#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

bool TimKiemNhiPhan(vector<ll> &a, ll x){
    ll l = 0;
    ll r = a.size()-1;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if (a[mid] == x) {
            a.erase(a.begin()+mid);
            return true;
        }
        if (a[mid] > x) r = mid - 1;
        if (a[mid] < x) l = mid + 1;
    }
    return false;
}

int main(){
    ll n, k, count; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k;
    sort(a.begin(), a.end());
    
    count = 0;
    for (int i = 0; i < a.size(); i++){
        ll x = k - a[i];
        if (x == a[i]) continue;
        if (TimKiemNhiPhan(a, x)){
            count++;
        }
    }
    cout << count;

    return 0;
}