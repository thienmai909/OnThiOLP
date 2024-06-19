#include <iostream>
#include <algorithm>
using namespace std;

long long a[1000005], b[1000005], n, k;

bool TimKiemNhiPhan(size_t x){
    int l = 0;
    int r = n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if (a[mid] == x) return true;
        if (a[mid] < x) l = mid + 1;
        if (a[mid] > x) r = mid - 1;

    }
    return false;
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cin >> k;
    for (int i = 0; i < k; i++) cin >> b[i];

    for (int i = 0; i < k; i++){
        if (TimKiemNhiPhan(b[i])) cout << "Y" << endl;
        else cout << "N" << endl;
    }

    return 0;
}