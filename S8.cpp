#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++){
        if (s[i] > 47 && s[i] < 58){
            s.erase(i, 1);
        }
    }
    for (int i = 0; i < s.length(); i++){
        if (s[i] > 47 && s[i] < 58){
            s.erase(i, 1);
        }
    }

    cout << s;

    return 0;
}