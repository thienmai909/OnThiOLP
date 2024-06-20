#include <iostream>
using namespace std;
using ull = unsigned long long;

int main()
{
    ull a[5] = {0};

    for (ull i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    if (a[0] != a[1] && a[0] != a[2] && a[1] == a[2])
    {
        cout << "YES";
        return 0;
    }

    ull count = 0;
    ull current = a[0];
    for (ull i = 0; i < 5; i++)
    {
        if (a[i] == current)
            ++count;
    }
    if (count == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}