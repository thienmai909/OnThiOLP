#include <bits/stdc++.h>
using namespace std;

vector<short> a;
int n;

void InDayNhiPhan(){
    for (auto i : a){
        cout << i;
    }
    cout << endl;
}

void SinhNhiPhan(int k){
    for (int i = 0; i <= 1; i++){
        a.push_back(i);
        if (k == n) InDayNhiPhan();
        else SinhNhiPhan(k+1);
        a.pop_back();
    }
}

int main(){
    cin >> n;
    SinhNhiPhan(1);
    return 0;
}
