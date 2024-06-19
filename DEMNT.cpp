#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n; ll tmp;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (isPrime(tmp)) a.push_back(tmp);
    }

    cout << a.size();

    return 0;
}