#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> c;

    for (int i = 0; i < s.length(); i++){
        c.insert(s[i]);
    }

    cout << c.size();
    
    return 0;
}