#include <iostream>
using namespace std;

long long a[10000005], b[10000005], n, k;

int TimNhiPhan(int x){
    int l = 0;
    int r = n-1;
    long long kq;
    while(l <= r){
        int mid = (l + r) / 2;
        if (b[mid] >= x){ 
            kq = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return b[kq];
}

void DayB(){
    for (size_t i = 0; i < n; i++){
        b[i] = (i+1) * (i+1)+1;
    }
}

int main(){
    cin >> n >> k;
    DayB();
    for (int i = 0; i < k; i++) cin >> a[i];
    for (int i = 0; i < k; i++) cout <<  TimNhiPhan(a[i]) << endl;

    return 0;
}