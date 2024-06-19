#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (a[i] > a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    if (n % 2 == 1){
        cout << a[static_cast<int>(n*0.5)+1-1];
    } else {
        cout << (a[static_cast<int>(n/2)-1] + a[static_cast<int>(n/2)+1-1])/2;
    }


    return 0;
}