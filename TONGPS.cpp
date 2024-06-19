#include <iostream>
#include <tuple>
using namespace std;
using ll = long long;

class PhanSo
{
private:
    ll a, b, c, d;
    ll tuSo, mauSo;

public:
    PhanSo(ll a, ll b, ll c, ll d)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    ll getTuSo()
    {
        this->tuSo = (this->a * this->d + this->b * this->c);
        return this->tuSo;
    }

    ll getMauSo()
    {
        this->mauSo = (this->b * this->d);
        return this->mauSo;
    }

    ll gcd()
    {
        ll tu = this->getTuSo();
        ll mau = this->getMauSo();
        while (mau != 0)
        {
            ll tmp = mau;
            mau = tu % mau;
            tu = tmp;
        }
        return tu;
    }

    tuple<ll, ll> rutGonPs()
    {
        ll chiaHet = this->gcd();
        ll tu = this->getTuSo() / chiaHet;
        ll mau = this->getMauSo() / chiaHet;
        return make_tuple(tu, mau);
    }
};

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    PhanSo *ps = new PhanSo(a, b, c, d);
    ll tu, mau;
    tie(tu, mau) = ps->rutGonPs();

    cout << tu << " " << mau << endl;
    delete ps;
    return 0;
}