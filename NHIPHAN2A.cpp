#include <bits/stdc++.h>
using namespace std;

vector<short> a;
int n, cnt = 0;

void InNhiPhan(){
    int d;
    d = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i-1] == 0 && a[i] == 1) ++d;
    }

    if (d > 1) return;

    for (auto i : a){
        cout << i;
    }
    cout << endl;
    ++cnt;
}

void SinhNhiPhan(short k = 1){
    for (int i = 0; i <= 1; i++){
        a.push_back(i);
        if (k == n) InNhiPhan();
        else SinhNhiPhan(k+1);
        a.pop_back();
    }
}

int main(){
    cin >> n;
    SinhNhiPhan();
    cout << "\n" << cnt;
    return 0;
}