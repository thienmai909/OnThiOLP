#include <iostream>
#include <climits>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll max = INT_MIN;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            ll tmp;
            cin >> tmp;
            if (max < tmp && tmp % 2 == 0)
            {
                max = tmp;
            }
        }
    }
    cout << max << endl;
    return 0;
}