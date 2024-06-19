#include <iostream>
#include <algorithm>
using namespace std;

long long a[1000005], b[1000005], n, k;

size_t TimKimNhiPhan(long long x){
    int l = 0;
    int r = n-1;
    int kq;
    while(l <= r){
        int mid = (l + r) / 2;
        if (a[mid] <= x) {
            kq = mid;
            l = mid + 1;
        }
        if (a[mid] > x) r = mid - 1;
    }
    return a[kq];
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cin >> k;
    for (int i = 0; i < k; i++) cin >> b[i];

    for (int i = 0; i < k; i++){
        cout << TimKimNhiPhan(b[i]) << endl;
    }


    return 0;
}