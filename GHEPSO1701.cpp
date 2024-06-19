#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<short> a;
vector<ll> b;
vector<ll> c;
int n, dd[10];

bool isPrime(ll n){
    if (n <= 1) return false;
    for (size_t i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}

void InHoanVi(){
    
    ll s = 0;
    for (auto i : b){
        s = s * 10 + i;
    }
    if (isPrime(s)) {
        c.push_back(s);
    }
    else return;
}

void SinhHoanVi(ll k = 1){
    for (int i = 0; i < a.size(); i++){
        if (dd[a[i]] == 0){
            b.push_back(a[i]);
            dd[a[i]] = 1;
            if (k == n) InHoanVi();
            else SinhHoanVi(k+1);
            b.pop_back();
            dd[a[i]] = 0;
        }
        
    }
}

int main(){
    cin >> n;
    a.resize(n);
    for (int i = 0; i < a.size(); i++){
        cin >> a[i];
        dd[i] = 0;
    }
    
    SinhHoanVi();

    if (c.size() == 0){
        cout << -1;
    } else {
        sort(c.begin(), c.end());
        for (auto i : c){
            cout << i << endl;
        }
    }

    return 0;
}