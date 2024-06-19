#include <bits/stdc++.h>
using namespace std;

long long fibo(int n){
    if (n == 0 || n == 1) return n;
    return fibo(n-2) + fibo(n-1);
    
}

int main(){
    cout << fibo(10);
    return 0;
}