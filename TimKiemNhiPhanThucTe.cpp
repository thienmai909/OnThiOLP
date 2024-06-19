#include <iostream>
using namespace std;

int a[1005], n, k;

int TimKiemNhiPhan(int x){
    int l = 0;
    int r = n;
    int kq;
    while(l <= r){
        //Tim phan tu nho nhat, dau tien >= x;
        int mid = (l+r)/2;
        // if (a[mid] == x) return mid;
        if (a[mid] >= x) {
            kq = mid;
            r = mid - 1;
        }
        if (a[mid] < x) l = mid + 1;
    }
    return kq;
}

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << TimKiemNhiPhan(k);
    return 0;
}