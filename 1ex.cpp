#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
	while (b != 0)
	{
		ll t = b;
		b = a % b;
		a = t;
	}
	return a;
}

ll lcm(ll a, ll b)
{
	return (a / gcd(a, b)) * b;
}

int main()
{
	ll a, b;
	cin >> a >> b;

	ll m = gcd(a, b);
	ll n = lcm(a, b);
	cout << m << "\n"
		 << n;
	return 0;
}