#include <bits/stdc++.h>
using namespace std;

size_t n;

int main(){
    cin >> n;
    for (size_t i = 1; i <= n; ++i){
        cout << i << " ";
        if (i == n) cout << "!";
    }
    return 0;
}