#include <bits/stdc++.h>
using namespace std;

vector<short> s;
int n;

void InNhiPhan(){
    for (auto i : s){
        cout << i;
    }
    cout << endl;
}

void SinhNhiPhan(int k){
    for(int i = 0; i <= 2; i++){
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
