#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, s;
    cin >> n;
    ll a[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    s = a[0]*a[0] + a[0]*a[0];
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
            if (i < j)
                if (a[i]*a[i]+ a[j]*a[j] > s) s = a[i]*a[i]+ a[j]*a[j];
        }
    }

    cout << s;
    return 0;
}