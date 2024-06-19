#include <iostream>
using namespace std;
using ull = unsigned long long;

ull gcd(ull a, ull b)
{
    while (b != 0)
    {
        ull t = b;
        b = a % b;
        a = t;
    }
    return a;
}

ull lcm(ull a, ull b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ull a, b;
    cin >> a >> b;

    cout << lcm(a, b) << endl;
    return 0;
}