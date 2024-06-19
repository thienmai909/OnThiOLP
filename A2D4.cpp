#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll a[100] = {0};
    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll tmp;
            cin >> tmp;
            a[j] += tmp;
        }
    }

    ll max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    cout << max;
    return 0;
}