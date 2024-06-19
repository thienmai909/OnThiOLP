#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; size_t sum; int tmp;
    cin >> s;
    

    sum = 0;
    for (int i = 0; i < s.length(); i++){
        tmp = s[i] - 48;
        sum += tmp;
    }

    cout << sum;
    return 0;
}