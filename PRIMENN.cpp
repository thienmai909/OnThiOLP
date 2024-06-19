#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAX_SIZE = 10000100;
bool p[MAX_SIZE];

void Eratosthenes(){
    for (size_t i = 0; i < MAX_SIZE; i++){
        p[i] = true;
    }

    p[0] = false;
    p[1] = false;

    for (size_t i = 2; i*i < MAX_SIZE; i++){
        if (p[i]){
            for (size_t j = i*i; j < MAX_SIZE; j += i){
                p[j] = false;
            }
        }
    }
    
}

int main(){
    ll n, i;
    cin >> n;

    if (n < 2){
        cout << 2;
        return 0;
    }

    Eratosthenes();

    i = n;

    while(true){
        if (p[i] == true) {
            cout << i;
            return 0;
        }
        ++i;
    }

    
    return 0;
}