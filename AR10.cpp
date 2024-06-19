#include <bits/stdc++.h>
using namespace std;

int main(){
    size_t n, tmp;
    cin >> n;
    vector<size_t> a;
    for (size_t i = 0; i < n*2; i++){
        cin >> tmp;
        a.push_back(tmp);
    }

    for (int i = 0; i < a.size()-1; i++){
        for (int j = i+1; j < a.size(); j++){
            if (a[i] < a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (auto i : a){
        cout << i << " ";
    }

    return 0;
}