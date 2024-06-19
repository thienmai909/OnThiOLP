#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    bool is;
    cin >> s;
    
    is = true;
    for (int i = 0, j = s.length()-1; (i < s.length()/2) && (j > s.length()/2); i++, j--){
        if (s[i] != s[j]) {
            is = false;
            break;
        }
    }

    if (is) cout << "YES";
    else cout << "NO";

    return 0;
}