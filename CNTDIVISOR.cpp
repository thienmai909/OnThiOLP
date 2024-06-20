#include <iostream>
using namespace std;
using ull = unsigned long long;

int main()
{
    ull l, r, k, count = 0;
    cin >> l >> r >> k;

    for (ull i = l; i <= r; i++)
    {
        if (i % k == 0)
        {
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}