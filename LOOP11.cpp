#include <iostream>
using namespace std;
using ull = unsigned long long;

int main(){
    double a; cin >> a;

    double sum = 0.0;
    ull count = 0;
    
    while (sum < a){
        ++count;
        sum += double(1)/double(count);
    }
    
    // cout << sum << endl;
    cout << count << endl;


    return 0;
}