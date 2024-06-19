#include <iostream>
#include <cmath>
using namespace std;
using ull = unsigned long long;

int main()
{
    ull n;
    cin >> n;
    ull count = 0;
    ull sqrt_n = sqrt(n);

    for (ull i = 1; i <= sqrt_n; i++)
    {
        if (n % i == 0)
        {
            ++count;
            if (i != n / i)
                ++count;
        }
    }

    cout << count << endl;
    return 0;
}