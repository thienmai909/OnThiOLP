#include <iostream>
using namespace std;
using ull = unsigned long long;

ull sumDigits(ull n){
    ull sum = 0;

    while(n > 0){

        ull donvi = n % 10;
        n /= 10;

        sum += donvi;
    }

    return sum;
}


int main(){
    int n; cin >> n;

    ull a[100] = {0};
    for (ull i = 0; i < n; i++){
        cin >> a[i];
    }
    
    ull count = 0;
    for (ull i = 0; i < n; i++){
        for (ull j = 0; j < n; j++){
            if (i < j) {
                if ((sumDigits(a[i]) + sumDigits(a[j])) % 9 == 0){
                    ++count;
                }
            }
        }
    }

    cout << count << endl;
    return 0;    
}