#include <iostream>
using namespace std;

using ull = unsigned long long;

class ThuaSoNguyenTo
{
private:
    ull n;

public:
    ThuaSoNguyenTo(ull n)
    {
        this->n = n;
    }

    ull phanTich()
    {
        int a[4] = {2, 3, 5, 7};
        int b[5] = {};
        int i = 0;
        while (this->n > 1)
        {
            if (this->n % a[i] == 0)
            {
                ++b[i];
                this->n /= a[i];
                continue;
            }
            else
            {
                ++i;
                if (i > 3)
                {
                    ++b[i];
                    break;
                }
            }
        }
        return b[2];
    }
};

void countPrime(ull n, ull b[])
{
    ull a[4] = {2, 3, 5, 7};

    ull i = 0;
    while (n > 1)
    {
        if (n % a[i] == 0)
        {
            n /= a[i];
            ++b[i];
            continue;
        }
        else
        {
            ++i;
            if (i > 3)
            {
                ++b[i];
                break;
            }
        }
    }
}

int main()
{
    ull n;
    cin >> n;
    ThuaSoNguyenTo *thuaSo = new ThuaSoNguyenTo(n);
    ull a = thuaSo->phanTich();

    cout << a << endl;
    // ull b[5] = {0};
    // countPrime(n, b);

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << b[i] << " ";
    // }

    delete thuaSo;
    return 0;
}
