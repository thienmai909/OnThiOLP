#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    string s;
    bool is;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        a[i] = x+y;
    }

    for (auto i : a){
        s += to_string(i);
    }

    is = true;
    for (int i = 0, j = s.length()-1; i < s.length()/2 && j > s.length()/2; i++, j--){
        if (s[i] != s[j]) {is = false; break;}
    }

    if (is) cout << "YES";
    else cout << "NO";
    return 0;
}