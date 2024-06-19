#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), [](const long &a, const long &b) -> bool {return a > b;});
    long long value = 0;
    for (int i = 0; i < k; i++){
        value += a[i];
    }

    cout << value;
    return 0;
}