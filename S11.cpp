#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    string scin;
    cin >> k >> scin;
    vector<char> s;
    map<char, char> m;
    for (int i = 0; i < scin.length(); i++){
        s.push_back(scin[i]);
    }
    
    for (int i = 97; i <= 122-k; i++){
        m.insert(make_pair(i, i+k));
    }

    for (int i = 122-k+1, j = 97; i <= 122; i++, j++){
        m.insert(make_pair(i, j));
    }
    scin = "";
    for (int i = 0; i < s.size(); i++){
        for (pair<char, char> it : m){
            if (s[i] == it.second) scin += it.first;
        }
    }

    cout << scin;
    return 0;
}