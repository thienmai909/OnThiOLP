#include <bits/stdc++.h>
using namespace std;

int main(){
    string n, s;
    cin >> n >> s;
    
    size_t f = n.find(s, 0), count = 0;

    while(f <= n.length()){
        f = n.find(s, f+1);
        ++count;
    }

    cout << count;
    return 0;
}