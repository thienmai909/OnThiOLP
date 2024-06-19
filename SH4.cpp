#include <iostream>
#include <cmath>

using namespace std;
using ull = unsigned long long;

class UocNguyenDuong
{
private:
    ull n;

public:
    UocNguyenDuong(ull n)
    {
        this->n = n;
    }

    ull tongUoc()
    {
        ull tong = 0;
        ull sqrt_n = sqrt(this->n);
        for (ull i = 1; i <= sqrt_n; i++)
        {
            if (n % i == 0)
            {
                tong += i;
                if (i != n / i)
                {
                    tong += n / i;
                }
            }
        }
        return tong;
    }
};

int main()
{
    ull n;
    cin >> n;

    UocNguyenDuong *uoc = new UocNguyenDuong(n);
    ull a = uoc->tongUoc();

    cout << a << endl;
    return 0;
}