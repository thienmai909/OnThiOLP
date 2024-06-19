#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	ll n; cin >> n;
	ll *a = new ll[n];
	vector<ll> b;
	for (size_t i = 0; i < n; i++) cin >> *(a+i);
	
	ll maxHead = *(a+0);
	ll minTail = LLONG_MAX;
	for (size_t i = 2; i < n; i++) minTail = min(minTail, *(a+i));
	
	
	for (size_t i = 1; i < n-1; i++){
		b.push_back(maxHead + *(a+i) - minTail);
		if (maxHead < *(a+i)){
			maxHead = *(a+i);
		}
		if (minTail == *(a+(i+1))){
			minTail = LLONG_MAX;
			for (size_t j = i+2; j < n; ++j) minTail = min(minTail, *(a+j));
		}
	}
	
	ll maxValue = LLONG_MIN;
	for (auto i : b){
		maxValue = max(maxValue, i);
	}
	cout << maxValue;
	
	delete[] a;
	return 0;
}