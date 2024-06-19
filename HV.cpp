#include <bits/stdc++.h>
using namespace std;

vector<short> s;
int n, dd[25];

void InHoanVi(){
    for (auto i : s){
        cout << i;
    }
    cout << endl;
}

void SinhHoanViKhongLap(short k = 1){
    for (int i = 1; i <= n; i++){
        if (dd[i] == 0){
            s.push_back(i);
            dd[i] = 1;
            if (k == n) InHoanVi();
            else SinhHoanViKhongLap(k+1);
            s.pop_back();
            dd[i] = 0;
        }
    }
}


int main(){
    cin >> n;
    for (int i = 0; i <= n; i++){
        dd[i] == 0;
    }
    SinhHoanViKhongLap();
    return 0;
}