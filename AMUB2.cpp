#include <iostream>
using namespace std;
using ll = long long;

ll toanModoul(ll a, ll b)
{
    ll cuoiA = a % 10;

    if (cuoiA == 0 && b > 0)
        return 0;
    else if (b == 0)
        return 1;

    ll ketQua = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            ketQua = (ketQua * a) % 10;
        }
        a = (a * a) % 10;
        b /= 2;
    }
    return ketQua;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    ll c = toanModoul(a, b);
    cout << c << endl;
    return 0;
}