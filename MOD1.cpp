#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    cout << ((a%c) * (b%c))%c;
    return 0;
}