#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MODULE 1000000007

int main(){
	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
	
	ll n; cin >> n;
	ll *fibo = new ll[1000005];
	
	fibo[0] = 0;
	fibo[1] = 1;
	
	for (size_t i = 2; i <= 1000000; ++i){
		fibo[i] = (fibo[i-1]%MODULE + fibo[i-2]%MODULE)%MODULE;
	}
	
	while(n >= 1){
		ll tmp; cin >> tmp;
		cout << fibo[tmp] << endl;
		--n;
	}
	
}