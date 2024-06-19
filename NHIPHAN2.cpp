#include <iostream>
#include <vector>
using namespace std;

int n;
vector<char> a;
vector<string> b;
vector<string> c;

void Ktra(string tmp){
    if (n >= 4){
        if (tmp.find("01", 0) == string::npos) {
            c.push_back(tmp);
            return;
        }
        for (int i = 0; i < n-1; i++){
            if (tmp[i] == '0' && tmp[i+1] == '1'){
                if (tmp.find("01", i+1) != string::npos){
                    return;
                } else {
                    c.push_back(tmp);
                    return;
                }
            }
        }
    } else {
        c.push_back(tmp);
        return;
    }

    
}

void InNhiPhan(){
    string tmp;
    for (auto i : a) tmp += i;
    b.push_back(tmp);
}


void SinhNhiPhan(int x){
    for (char i = '0'; i <= '1'; i++){
        a.push_back(i);
        if (x == n) InNhiPhan();
        else SinhNhiPhan(x+1);
        a.pop_back();
    }
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    cin >> n;
    SinhNhiPhan(1);
    for (auto i : b) Ktra(i);
    cout << c.size() << endl;
    for (auto i : c) cout << i << endl;

    return 0;
}