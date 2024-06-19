#include <bits/stdc++.h>
using namespace std;

string a;
int n, countt;

bool isPrime(int l){
    if (l <= 1) return false;
    for (int i = 2; i < sqrt(l); i++){
        if (l % i == 0) return false;
    }
    return true;
}

void InNhiPhan(){
    int cnt_1, cnt_0;
    cnt_1 = 0;
    cnt_0 = 0;
    for (auto i : a){
        if (i == '1') ++cnt_1;
        if (i == '0') ++cnt_0;
    }
    if (isPrime(cnt_1) && isPrime(abs(cnt_1-cnt_0))) ++countt;
}

void SinhNhiPhan(int k = 1){
    for (char i = '0'; i <= '1'; i++){
        a.push_back(i);
        if (k == n) InNhiPhan();
        else SinhNhiPhan(k+1);
        a.pop_back();
    }
}

int main(){
    cin >> n;
    countt = 0;
    SinhNhiPhan();
    cout << countt;
    return 0;
}