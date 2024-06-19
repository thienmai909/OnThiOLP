#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, temp1, temp2;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    temp1 = 1;
    temp2 = 1;

    for (int i = 0; i < n; i++){
        temp2 = 1;
        for (int j = 0; j < n; j++){
            if (i == j)  continue;
            else {
                if (a[i] == a[j]) ++temp2;
            }
        }
        if (temp2 > temp1) temp1 = temp2;
    }

    cout << temp1;   
    return 0;
}