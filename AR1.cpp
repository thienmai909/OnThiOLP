#include <bits/stdc++.h>
using namespace std;

int main(){
    short n, tmp;
    cin >> n;
    short a[n];
    for (short i = 0; i < n; i++) cin >> a[i];
    
    for (short i = 0; i < n-1; i++)
        for (short j = i+1; j < n; j++){
            if (a[i] > a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    
    for (auto i : a) cout << i << " ";
    return 0;
}