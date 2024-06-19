#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i  == 0) return false;
    }
    return true;
}

int main(){
    ll n;
    cin >> n;
    if (isPrime(2*n+1)){
        cout << "CO";
    } else {
        cout << "KHONG";
    }

    return 0;
}