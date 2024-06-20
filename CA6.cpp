#include <iostream>
using namespace std;

int main()
{
    double a;
    cin >> a;
    long b = static_cast<long>(a);
    double c = static_cast<double>(a - b);

    cout << b << " " << c << endl;
    return 0;
}