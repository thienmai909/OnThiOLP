#include <iostream>
using namespace std;
using ull = unsigned long long;

int main()
{
    ull a, b, c;
    cin >> a >> b >> c;

    a = (a / c) * c;
    b = (b / c) * c;
    c = (b / c) - (a / c);

    cout << c << endl;
    return 0;
}