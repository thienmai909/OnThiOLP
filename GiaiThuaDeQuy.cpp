#include <bits/stdc++.h>
using namespace std;

long long giaiThua(int n){
    if (n == 0) return 1;
    long long tmp = giaiThua(n-1)*n;
    return tmp;
}

int main(){
    cout << giaiThua(3);
    return 0;
}