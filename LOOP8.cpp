#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
// n la so chinh phuong <=> sqrt(n) => la so tu nhien
// n*n

bool KtraSoChinhPhuong(ll n)
{
    if (n < 0)
        return true;
    ll sqrt_n = sqrt(n);

    return sqrt_n * sqrt_n == n;
}

int main()
{
    ll n;
    cin >> n;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        if (KtraSoChinhPhuong(temp) == true && (temp % 2) == 1)
        {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}