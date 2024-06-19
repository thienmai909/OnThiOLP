#include <bits/stdc++.h>
using namespace std;

int main(){
    int xa, ya, xb, yb, xc, yc; int ab, bc, ca;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    ab = sqrt((ya-xa)*(ya-xa) + (yb-xb)*(yb-xb));
    bc = sqrt((yb-xb)*(yb-xb) + (yc-xc)*(yc-xc));
    ca = sqrt((yc-xc)*(yc-xc) + (ya-xa)*(ya-xa));
    
    if (ab + bc > ca && bc + ca > ab && ab + ca > bc){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}