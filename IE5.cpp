#include <iostream>
using namespace std;

using ull = unsigned long long;

class DieuKien
{
private:
    ull a;
    ull b;

public:
    DieuKien(ull a, ull b)
    {
        setA(a);
        setB(b);
    }

    bool xetTachSo()
    {
        bool is = true;
        ull tach = (a * b) % 100;
        if (tach % 3 == 0)
        {
            is = true;
        }
        else
        {
            is = false;
        }
        return is;
    }

    void setA(ull a)
    {
        this->a = a;
    }
    void setB(ull b)
    {
        this->b = b;
    }
    ull getA()
    {
        return this->a;
    }
    ull getB()
    {
        return this->b;
    }
};

int main()
{
    ull a, b;
    cin >> a >> b;
    DieuKien d(a, b);

    bool is = d.xetTachSo();

    if (is)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}