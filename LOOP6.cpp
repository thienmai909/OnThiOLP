#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "@";
            j++;
        }
        cout << "\n";
    }

    return 0;
}