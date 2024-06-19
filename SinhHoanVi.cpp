#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int dd[25], n;

void InHoanVi(){
    for (auto i : a){
        cout << i;
    }
    cout << endl;
}

void SinhHoanVi(int k = 1){
    for (int i = 1; i <= n; i++){
        if (dd[i] == 0){
            a.push_back(i);
            dd[i] = 1;
            if (k == n) InHoanVi();
            else SinhHoanVi(k+1);
            a.pop_back();
            dd[i] = 0;
        }
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        dd[i] = 0;
    }
    SinhHoanVi();
    return 0;
}
