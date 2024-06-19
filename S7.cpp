#include <bits/stdc++.h>
using namespace std;

int main(){
    // char s[1000]; int count;
    // cin.getline(s, 1000);

    // char *p = strtok(s, " ");
    // count = 0;
    // while(p != nullptr){
    //     ++count;
    //     p = strtok(nullptr, " ");
    // }

    // cout << count;

    string s;
    int count;
    getline(cin, s);
    while(s[0] == 32){
        s.erase(0, 1);
    }
    while(s[s.length()-1] == 32){
        s.pop_back();
    }

    count = 1;
    for (int i = 1; i < s.length(); i++){
        if (s[i-1] != 32 && s[i] == 32) ++count;
    }

    cout << count;

    return 0;
}