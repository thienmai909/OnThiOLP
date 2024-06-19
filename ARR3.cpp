#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, min;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    min = INT_MAX;
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 1)
            if (a[i] < min) min = a[i];
    }

    cout << min;
    return 0;
}