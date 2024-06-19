#include <bits/stdc++.h>
using namespace std;

int main(){
    size_t n, s, sum;
    cin >> n >> ;
    
    s = 1; sum = 1;
    for (int i = 2; i <= n; i++){
        s *= i;
        sum += s%1000000007;
    }
    cout << sum;
    return 0;
}