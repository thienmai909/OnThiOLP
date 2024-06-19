#include <bits/stdc++.h>
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

    long long duong_value = abs(a[0] + a[1]);
    long long am_value = abs(a.back() + a[a.size()-2]);

    long long value = max(duong_value, am_value);


    cout << value;

    return 0;
}