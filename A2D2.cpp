#include <iostream>
using namespace std;
using ll = long long;

int main()
{
	ll n;
	cin >> n;
	ll tong = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			ll tmp;
			cin >> tmp;
			tong += tmp;
		}

	cout << tong;
	return 0;
}