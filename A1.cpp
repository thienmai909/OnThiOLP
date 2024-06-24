#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<int> a(100);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; i++){
        sum += pow(a[i], 2);
    }

    cout << sum << endl;

    return 0;
}