#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++){
        if (s[i] > 96 && s[i] < 123){
            s[i] = s[i] - 32;
        }
    }

    cout << s;
    return 0;
}