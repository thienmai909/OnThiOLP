#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, s, i;
    cin >> n;
    s = 1;
    i = 2;
    while(i <= n){
        s += i*i;
        i += 1;
    }
    

    cout << s;
    return 0;
}