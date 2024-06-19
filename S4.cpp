#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; int count;
    cin >> s;
    
    count = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] > 47 && s[i] < 58){
            ++count;
        }
    }

    cout << count;
    return 0;
}