#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sqr(ll a){
    return a*a;
}

ll pow(ll a, ll n){
    if (n == 0) return 1;
    else {
        if (n % 2 == 0){
            return sqr(pow(a, n/2));
        }
        else {
            return (a * sqr(pow(a, (n-1)/2)));
        }
    }
}

int main(){
    ll a = 2, b;
    cin >> b;
    if (b % 2 == 0){
        cout << (pow(a, b/2)%10000000007) * (pow(a, b/2)%10000000007);
    } else {
        cout << (pow(a, b/2) % 10000000007) * (pow(a, b/2) % 10000000007) * (a % 10000000007);
    }

    return 0;
}