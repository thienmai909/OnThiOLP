#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end(), [](const long long &a, const long long &b) -> bool{return a < b;});
    sort(b.begin(), b.end(), [](const long long &a, const long long &b) -> bool{return a > b;});

    for (auto i : b){
        a.push_back(i);
    }

    for (auto i : a) cout << i << " ";

    return 0;
}