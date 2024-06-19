#include <bits/stdc++.h>
using namespace std;


int main(){
    size_t n, e = 2;
    cin >> n;
    for (int i = 2; i <= n; i++){
        e *= 2;
    }
    cout << e;
    return 0;
}