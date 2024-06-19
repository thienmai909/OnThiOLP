#include <iostream>
#include <cmath>
using namespace std;
using ull = unsigned long long;

int main()
{
    ull n;
    cin >> n;
    ull sqrt_n = sqrt(n);
    ull sum = 0;
    for (int i = 1; i <= sqrt_n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }

    cout << sum << endl;

    return 0;
}