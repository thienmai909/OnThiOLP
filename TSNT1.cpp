#include <bits/stdc++.h>
using namespace std;

bool isPrime(size_t n){
    if (n <= 1) return false;
    for (size_t i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    size_t n, count;
    cin >> n;
    count = 0;

    vector<size_t> a;
    set<int> b;

    for (size_t i = 0; i <= n; ++i){
        if (isPrime(i)) a.push_back(i);
    }

    while(n > 1){
        if (n % a.back() == 0){
            b.insert(a.back());
            n = n / a.back();
        } else {
            a.pop_back();
        }
    }
    cout << b.size();
    return 0;
}