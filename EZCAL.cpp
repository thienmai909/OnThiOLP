#include <bits/stdc++.h>
using namespace std;

long long s(long long a, long long b) {return a+b;}
long long p(long long a, long long b) {return a*b;}

int main(){
    long long a, b;
    cin >> a >> b;
    cout << s(a, b) << endl;
    cout << p(a, b) << endl;
    return 0;
}