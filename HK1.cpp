#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll UCLN(ll a, ll b){
    ll tmp;
    if (b == 0) return a;
    else {
        tmp = UCLN(b, a % b);
        return tmp;
    }
}


int main(){
    ll a, b, c;
    cin >> a >> b;
    if (b == 0){
        cout << "ERROR";
        return 0;
    }

    c = UCLN(a, b);
    a = a/c;
    b = b/c;
    if (a > 0 && b < 0){
        a = -a;
        b = abs(b);
    }
    
    cout <<  a << " " << b;

    return 0;
}