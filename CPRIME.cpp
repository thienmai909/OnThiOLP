#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool isPrime(ll n)
{
    if (n <= 1)
        return false;

    ll sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;
    ll count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            ++count;
        }
    }

    cout << count;
    return 0;
}