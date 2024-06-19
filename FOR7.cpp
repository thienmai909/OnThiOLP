#include <bits/stdc++.h>
using namespace std;



int main(){
    size_t n;
    cin >> n;
    
    
    if (n <= 2) {cout << 1; return 0;}
    else {
        int U[n+1];
        U[1] = 1;
        U[2] = 1;
        for (int i = 3; i <= n; i++){
            U[i] = 2*U[i-1] - U[i-2];
        }
        cout << U[n];
    }
    
    
    return 0;
}