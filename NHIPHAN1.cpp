#include <bits/stdc++.h>
using namespace std;

string s;
int n;

void InNhiPhan(){
    if (s.find("01", 0) != -1){
        return;
    } else {
        for (auto i : s){
            cout << i;
        }
        cout << endl;
    }
        
}

void SinhNhiPhan(int k){
    for(int i = '0'; i <= '1'; i++){
        s.push_back(i);
        if (k == n) InNhiPhan();
        else SinhNhiPhan(k+1);
        s.pop_back();
    }
}

int main(){
    cin >> n;
    SinhNhiPhan(1);
    return 0;
}
