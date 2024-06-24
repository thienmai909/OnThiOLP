#include <iostream>
using namespace std;

int main(){
    int a[5] = {0};

    for (int i = 0; i < 5; i++){
        cin >> a[i];
    }

    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 5; j++){
            if (a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    cout << a[1] << endl;
    
    return 0;
}