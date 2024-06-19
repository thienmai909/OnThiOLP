#include <iostream>
using namespace std;
using ll = long long;

/*

n va k nhap tu ban phim
==> n = q * k + r
    n - r = q * k
    - (n - r) = -(q * k)
    => r = -(q * k) + n


    (2 * n + (q * k)) / k = q
tim q va r
*/

int main()
{
    ll n, k;
    cin >> n >> k;

    ll q = n / k;
    ll r = n % k;

    cout << q << " " << r;

    return 0;
}