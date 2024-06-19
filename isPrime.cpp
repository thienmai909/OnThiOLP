#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void isPrime(ll n, bool &ok){
    if (n <= 1) ok = false;
    else {
        for (ll i = 2; i <= sqrt(n); i++){
            if (n % i == 0)  {
                ok = false;
                break;
            }
        }
    }
}

int main(){
    bool ok = true;
    isPrime(2, ok);

    if (ok) cout << "YES";
    else cout << "NO";
    return 0;
}