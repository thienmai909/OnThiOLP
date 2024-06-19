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
        for (int j = 0; j < n; j++){
            if (i < j && a[i] > a[j]) s++;
        }
    }

    cout << s;
    return 0;
}