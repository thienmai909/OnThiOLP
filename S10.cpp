#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; long long k;
    cin >> k >> s;
    
    string sa = "", sb = "";
    sa.append(s.begin(), s.begin()+k);
    
    sb.append(s.begin()+k, s.end());
    s = "";

    for (auto i : sb){
        s = i + s;
    }
    for (auto i : sa){
        s = i + s;
    }
    
    cout << s;
    
    return 0;
}