#include <bits/stdc++.h>
using namespace std;

long long a, b, c, delta;

int main(){
    cin >> a >> b >> c;
    delta = b*b - 4*a*c;

    if (delta < 0){
        cout << "NOSOL";
    } else if (delta == 0){
        cout << "ONE";
    } else {
        cout << "TWO";
    }

    return 0;
}