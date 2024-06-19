#include <bits/stdc++.h>
using namespace std;

int main(){
    size_t n, tmp;
    cin >> n;
    size_t a[n];
    for (size_t i = 0; i < n; i++){
        cin >> a[i];
    }

    for (size_t i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            a[i] /= 2;
        } else {
            a[i] += 1;
        }
        
    }

    for (size_t i = 0; i < n-1; i++){
        for (size_t j = i+1; j < n; j++){
            if (a[i] > a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            } 
        }   
    }
    
    for (auto i : a){
        cout << i << " ";
    }

    return 0;
}