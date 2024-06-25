#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using ull = unsigned long long;
using namespace std;

vector<ull> uocSoN(ull n){
    vector<ull> a;
    ull i = 1;
    for (ull i = 1; i <= pow(n, 0.5); i++){
        if (n % i == 0){
            a.push_back(i);
            if (i != n/i){
                a.push_back(n/i);
            }
        }
    }
    return a;
}

int main(){
    ull n; cin >> n;
    vector<ull> a = uocSoN(n);

    sort(a.begin(), a.end());

    ull sum = 0;
    for (ull i = 0; i < a.size()-1; i++) {
        sum += a[i];
    }
    cout << endl;
    if (sum == n){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}