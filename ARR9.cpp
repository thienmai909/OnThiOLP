#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, maxc;
    char tmp;
    cin >> n;
    int a[1001] = {0};
    
    for (int i = 0; i < n; i++){
        cin >> tmp;
        ++a[tmp];
    }
    maxc = a[97], tmp = 97;
    for (int i = 98; i <= 122; i++){
        if (a[i] > maxc) {
            maxc = a[i]; 
            tmp = i;
        }
    }


    cout << tmp;
    return 0;
}