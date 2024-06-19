#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
    if (n <= 1) return false;
    for (ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

bool isPrimeIn(ll n){
    while(n > 0){
        if (isPrime(n)){
            n /= 10;
        } else {
            return false;
        }
    }
    return true;
}

int main(){
    ll n;
    cin >> n;   

    if(isPrimeIn(n)) cout << "YES";
    else cout << "NO";
    return 0;
}