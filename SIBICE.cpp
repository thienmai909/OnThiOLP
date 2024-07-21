#include <iostream>
using namespace std;

int main(){
    cout << "Loading.." << endl;
    int n; cin >> n;
    int w, h; cin >> w >> h;
    int a[100];

    for (int i = 0; i < n; i++){
        cin >> a[i];

        if (a[i] <= w || a[i] <= h){
            cout << "DA";
        } else {
            cout << "NE";
        }
    }


    return 0;
}