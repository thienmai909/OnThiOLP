#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;

int main()
{
    ull n;
    cin >> n;
    vector<int64_t> a;
    for (size_t i = 0; i < n; i++)
    {
        static ull tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    int64_t sum = 0, k;
    cin >> k;
    for (size_t i = 0; i < k; i++)
    {
        sum += a[i];
    }

    cout << sum << endl;
    return 0;
}