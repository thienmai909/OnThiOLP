#include <bits/stdc++.h>
using namespace std;

size_t n;

int main(){
    cin >> n;
    for (size_t i = 1; i <= n; i++){
        for (size_t j = 1; j <= i; j++){
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}