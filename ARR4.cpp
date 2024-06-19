#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    s = 0;
    for (int i = 0; i < n; i++){
        s += abs(a[i]);
    }

    cout << s;
    return 0;
}