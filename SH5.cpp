#include <iostream>
#include <cmath>
using namespace std;
using ull = unsigned long long;

bool isPrime(ull n){
    if (n <= 1) return false;
    ull sqrt_n = sqrt(n);
    for (ull i = 2; i <= sqrt_n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ull n; cin >> n;

    while(true){
        if (isPrime(n)){
            cout << n;
            break;
        } else ++n;
    }
    
    return 0;
}