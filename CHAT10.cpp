#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;

int TimKiemNhiPhanLon(vector<ll> &a, ll x){
    int l = 0;
    int r = a.size()-1;
    int kq;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if (a[mid] >= x){
            kq = mid;
            r = mid - 1;
        } else l = mid + 1;
    }
    return kq;
}

int TimKiemNhiPhanBe(vector<ll> &a, ll x){
    int l = 0;
    int r = a.size()-1;
    int kq;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if (a[mid] <= x){
            kq = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    return kq;
}

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    for (size_t i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
 
    int k; cin >> k;
    while(k >= 1){
        ll tmp; cin >> tmp;
        ll val1 = a[TimKiemNhiPhanBe(a, tmp)];
        ll val2 = a[TimKiemNhiPhanLon(a, tmp)];
        cout << min(abs(tmp - val1), abs(tmp - val2)) << endl;
        --k;
    }

    return 0;
}