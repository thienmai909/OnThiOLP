#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; long long s;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    s = 0;
    for (int i = 1; i < n; i++){
        a[i] = a[i-1] + a[i];
        s += a[i] * a[i];
    }

    cout << s;
    return 0;
}