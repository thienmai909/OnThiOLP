#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	
	ll n; cin >> n;
	ll *a = new ll[n];
	for (size_t i = 0; i < n; i++) cin >> a[i];
	
	ll max_tren = a[0];
	ll duoi = a[0]+a[1];
	
	for (size_t i = 1; i < n-1; i++){
		duoi = max(a[i+1], duoi + a[i+1]);
		if (max_tren < duoi) max_tren = duoi;
	}
	
	cout << max_tren << endl;
	delete[]a;
	return 0;
}