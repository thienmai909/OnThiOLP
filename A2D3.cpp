#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            sum += tmp;
        }
        if (max < sum)
            max = sum;
    }

    cout << max << endl;
    return 0;
}