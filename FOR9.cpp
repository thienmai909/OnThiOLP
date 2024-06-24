#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;

const ull MOD = 1e9+7;

vector<ull> giaiThua(ull n){
    vector<ull> factori(n+1);
    factori[0] = 1;
    for (ull i = 1; i <= n; i++){
        factori[i] = (factori[i-1] * i) % MOD;
    }

    return factori;
}


int main(){
    ull sum = { 0 };
    ull n; cin >> n;

    vector<ull> a = giaiThua(n);

    for (ull i = 1; i <= n; i++){
        sum = (sum + a[i]) % MOD;
    }

    cout << sum << endl;
    return 0;
}