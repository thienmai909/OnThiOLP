#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll giaiThua(int n){
    if (n <= 1) return 1;
    return n*giaiThua(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << giaiThua(n);

    return 0;
}