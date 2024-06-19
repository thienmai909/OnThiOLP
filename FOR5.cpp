#include <bits/stdc++.h>
using namespace std;


int main(){
    size_t n, t;
    cin >> n;
    t = 1;
    for (size_t i = 1; i <= n; i++){
        t = t*i % 1000000007;
    }

    cout << t;
    return 0;
}