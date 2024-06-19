#include <bits/stdc++.h>
using namespace std;

size_t n;

int main(){
    cin >> n;
    for (size_t i = 1; i <= n; i++) cout << "#"; cout << endl;
    for (size_t i = 1; i <= n-1; i++) cout << "#"; cout << endl;
    for (size_t i = 1; i <= n-2; i++) cout << "#"; cout << endl;
    return 0;
}