#include <bits/stdc++.h>
using namespace std;



int main(){

    size_t n;
    float s;
    cin >> n;
    s = 0;
    for (size_t i = 1; i <= n; i++){
        s += 1/i;
    }

    cout << setprecision(5) << s << " " << n << endl;

    return 0;
}