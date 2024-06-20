#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll a[100][100];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    ll sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
            {
                sum += a[i][j];
            }
        }
    }

    cout << sum << endl;
    return 0;
}