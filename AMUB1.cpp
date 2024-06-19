#include <bits/stdc++.h>
using namespace std;

int main(){
    size_t a, b;
    cin >> a >> b;
    cout << static_cast<size_t>(pow(a, b))%10;

    return 0;
}