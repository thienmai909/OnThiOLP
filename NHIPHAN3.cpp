#include <bits/stdc++.h>
using namespace std;

string a;
vector<string> s;
int n, cnt = 0;

void InNhiPhan(){
    for (int i = 0; i < a.length(); i++){
        if (a[i] == '1' && a[i+1] == '1') return;
    }
    s.push_back(a);
    ++cnt;
}

void SinhNhiPhan(short k = 1){
    for (char i = '0'; i <= '1'; i++){
        a.push_back(i);
        if (k == n) InNhiPhan();
        else SinhNhiPhan(k+1);
        a.pop_back();
    }
}

int main(){
    cin >> n;
    SinhNhiPhan();
    cout << cnt << endl;
    for (auto i : s){
        cout << i << endl;
    }
    return 0;
}