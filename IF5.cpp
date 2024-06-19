#include <iostream>
#include <cmath>
using namespace std;

size_t n, nn;
int main(){
    cin >> n;
    nn = sqrt(n);
    if (nn*nn == n){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}