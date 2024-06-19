#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    long n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), [](const long &a, const long &b){return a > b;});
    long long value = 1;
    for (int i = 0; i < n; i++){
        if (a[i] * (i+1) > value) value = a[i] * (i+1);
    }

    cout << value;

    return 0;
}