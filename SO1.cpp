#include <iostream>
using namespace std;

using ll = long long;

void countPrime(ll n, ll b[])
{
	ll a[4] = {2, 3, 5, 7};

	ll i = 0;
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
	ll n;
	cin >> n;
	if (n <= 0)
	{
		cout << 0;
		return 0;
	}

	ll b[5] = {0};

	countPrime(n, b);

	ll tich = 1;
	for (int i = 0; i < 5; i++)
	{
		if (b[i] != 0)
		{
			tich = tich * (b[i] + 1);
		}
	}

	cout << tich;
	return 0;
}