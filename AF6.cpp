#include <iostream>
#include <tuple>
using namespace std;
using ll = long long;

class Boi
{
private:
    ll a;
    ll b;

public:
    Boi(ll a, ll b);
    ll gcd(ll a, ll b);
    ll lcm(ll a, ll b);
    void tachSo();

    ll getA();
    ll getB();
};

ll Boi::getA()
{
    return this->a;
}

ll Boi::getB()
{
    return this->b;
}

Boi::Boi(ll a, ll b)
{
    this->a = a;
    this->b = b;
}

ll Boi::gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

ll Boi::lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void Boi::tachSo()
{
    ll sumA = 0;
    ll sumB = 0;

    while (this->a > 0)
    {
        ll t;
        ll tt;

        t = this->a % 10;
        tt = this->a / 10;
        this->a /= 10;

        sumA += t;
    }

    while (this->b > 0)
    {
        ll t;
        ll tt;

        t = this->b % 10;
        tt = this->b / 10;
        this->b /= 10;

        sumB += t;
    }
    this->a = sumA;
    this->b = sumB;
};

int main()
{
    ll m, n;
    cin >> m >> n;
    Boi *b = new Boi(m, n);

    b->tachSo();

    ll a = b->lcm(b->getA(), b->getB());

    cout << a << endl;
    delete b;
    return 0;
}