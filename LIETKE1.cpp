#include <bits/stdc++.h>
using namespace std;

string s;
int n;

void InNhiPhan(){
    if (s.find("BB", 0) != -1){
        return;
    }
    for (auto i : s){
        cout << i;
    }
    cout << endl;
}

void SinhNhiPhan(int k){
    for(char i = 'A'; i <= 'B'; i++){
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
