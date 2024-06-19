#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, s, i;
    cin >> n;
    s = 1;
    i = 3;
    while(i <= 2*n+1){
        s += i;
        i += 2;
    }
    

    cout << s;
    return 0;
}