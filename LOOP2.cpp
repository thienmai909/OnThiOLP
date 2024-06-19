#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    long long s = 0;
    while(n >= 1){
        s += pow(n, 4);
        --n;
    }

    cout << s;
    return 0;
}