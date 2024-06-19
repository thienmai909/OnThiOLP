#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int n, k;

void InPhanTu(){
    for (auto i : a){
        cout << i;
    }
    cout << endl;
}

void SinhToHop(int giatriMax = 1){
    for (int i = giatriMax; i <= n; i++){
        a.push_back(i);
        if (a.size() == k) InPhanTu();
        else SinhToHop(i+1);
        a.pop_back();
    }
}

int main(){
    cin >> k >> n;
    SinhToHop();
    return 0;
}
