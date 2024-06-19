#include <iostream>
using namespace std;
using ull = unsigned long long;

int main()
{
    ull n;
    cin >> n;

    ull sum = 0;
    for (ull i = 0; i < n; i++)
    {
        ull tmp;
        cin >> tmp;

        while (tmp > 0)
        {
            int dv = 0;
            int keDv = 0;

            dv = tmp % 10;
            keDv = tmp / 10;
            tmp /= 10;

            sum += dv;
        }
    }
    cout << sum << endl;
    return 0;
}
