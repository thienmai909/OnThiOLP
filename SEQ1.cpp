#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	ll n;
	cin >> n;
	ll *a = new ll[n];
	for (size_t i = 0; i < n; i++) cin >> a[i];
	
	ll pivot = a[n-1];
	for (size_t i = n-1; i > 0; --i){
		a[i] = pivot - a[i-1];
		pivot = max(pivot, a[i-1]);
	}
	
	ll value = 0;
	for (size_t i = 1; i < n; i++) value = max(value, a[i]);
	
	
	cout << value;
	delete[] a;
	return 0;
}