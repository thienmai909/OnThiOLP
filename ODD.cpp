#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), [](const long long &a, const long long &b){ return a > b;});

    for (int i = 0; i < n; i+=2){
        if (a[i] != a[i+1]) {
            cout << a[i];
            return 0; 
        }
    }

    return 0;
}