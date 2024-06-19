#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    ll temp1 = {0}, temp2 = {0};
    for (size_t i = 0; i < n; i++)
    {
        temp2 = temp1;
        cin >> temp1;
        if (i == 0 && temp1 < 0)
        {
            cout << temp1;
            return 0;
        }

        if (temp1 < 0)
        {
            cout << temp2;
            return 0;
        }
    }
    return 0;
}