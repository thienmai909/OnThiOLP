#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<int> &a, int k, int mid){
    int count = 0;
    for (auto i : a){
        count += i / mid;
    }
    return count >= k;
}

int ChatNhiPhan(vector<int> &a, int k){
    int l = 1;
    int r = a.back();
    int result = {};
    while(l <= r){
        int mid = (l+r)/2;
        if (check(a, k, mid)){
            result = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return result;
}


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    cout << ChatNhiPhan(a, k);

    return 0;
}