#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k, x = 1; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n, greater<int>());

    if (n == 1) {
        cout << 0;
        return 0;
    }

    int sum = a[0];
    for (int i = 1; i <= n; i++){
        if (sum >= k){
            cout << x;
        }
    }

    return 0;
}