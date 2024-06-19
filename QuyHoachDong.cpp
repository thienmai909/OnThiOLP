#include <bits/stdc++.h>
using namespace std;

long long n, m, f[1005][1005];

int main(){
	cin >> n >> m;
	f[1][1] = 1;
	for (int i = 1; i <= n; ++i){
		f[i][1] = 1;
	}
	for (int i = 1; i <= m; ++i){
		f[1][i] = 1;
	}
	
	for (int i = 2; i <= n; ++i){
		for (int j = 2; j <= m; ++j){
			f[i][j] = f[i-1][j] + f[i][j-1];
		}
	}
	
	cout << f[n][m];
	return 0;
}