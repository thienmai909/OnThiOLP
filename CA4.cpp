#include <iostream>
using namespace std;
using ull = unsigned long long;

int main(){
    ull n, k; cin >> n >> k;
    ull m = n % k;
    if (m == 0) {
        cout << n;
        return 0;
    } else {
        ull i = n + m;
        while (true){
            if (i % k == 0){
                cout << i;
                break;
            }
            i += m;
        }
    }

    return 0;
}