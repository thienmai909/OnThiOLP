#include <iostream>
using namespace std;

#define MAX_SIZE 1000000
short a[MAX_SIZE+5];

void Eratosthenes(){
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i <= MAX_SIZE; i++){
        a[i] = 1;
    }
    for (int i = 2; i <= MAX_SIZE; i++){
        if (a[i] == 1){
            for (size_t j = i*i; j <= MAX_SIZE; j += i){
                a[j] = 0;
            }
        }
    }
}

int main(){
    long long m, n, count;
    cin >> m >> n;

    Eratosthenes();

    count = 0;
    for(int i = m; i <= n; i++){
        if (a[i] == 1) ++count;
    }

    cout << count;
    return 0;
}
