#include <bits/stdc++.h>
using namespace std;



int main(){
    size_t n, temp;
    cin >> n;
    
    
    if (n <= 2) {cout << 1; return 0;}
    else {
        size_t U[n+1];
        U[1] = 1;
        U[2] = 1;
        for (int i = 3; i <= n; i++){
            temp = (3*U[i-1] - U[i-2])%1000000007;
            U[i] = temp;
        }

        cout << U[n] << endl;
    }
    
    
    return 0;
}