#include <iostream>
#include <climits>
using namespace std;

int main(){
    long long tmp, min = LLONG_MAX;

    for (int i = 0; i < 3; i++){
        cin >> tmp;
        if (tmp < min) min = tmp;
    }

    cout << min;
    return 0;
}