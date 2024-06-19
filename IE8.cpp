#include <iostream>

using namespace std;
using ull = unsigned long long;

int main()
{
    ull a, b, c;
    cin >> a >> b >> c;

    if (a / b == c || b / c == a || c / a == b)
    {
        cout << "/";
    }
    else
    {
        cout << "NOSOL";
    }
}