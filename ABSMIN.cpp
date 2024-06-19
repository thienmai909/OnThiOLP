// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), [](const long long&a, const long long&b) -> bool{
        return a > b;
    });

    long long value = abs(a[0]-a[1]);
    for (int i = 1; i < n; i++){
        if (abs(a[i] - a[i+1]) < value) value = abs(a[i] - a[i+1]);
    }
    
    // long long duong_value = abs(a[0] - a[1]);
    // long long am_value = abs(a.back() - a[a.size()-2]);
    // long long value = min(duong_value, am_value);
    cout << value;

    // for (auto i : a){
    //     cout << i << " ";
    // }
    return 0;
}