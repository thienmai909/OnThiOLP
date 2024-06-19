#include <bits/stdc++.h>
using namespace std;

int main(){
    size_t m, n;
    char c;
    cin >> m >> n >> c;
    
    
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cout << c;
        }
        cout << endl;
    }
    return 0;
}