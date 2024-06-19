#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, min;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m+1];
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    
    for (int i = 0; i < m; i++){
        min = a[0];
        for (int j = 0; j < b[i]; j++){
            for (int k = 1; k < b[i]; k++){
                if (a[k] < min) min = a[k];
            }
        }
        cout << min << endl;
    }

    return 0;
}