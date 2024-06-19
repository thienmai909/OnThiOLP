#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	
	string a, b;
	
	vector<vector<int>> c(m+1, vector<int>(n+1, 0));
	
	cin >> a >> b;
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (a[i] == b[j]){
				c[i+1][j+1] = c[i][j] + 1;
			} else {
				c[i+1][j+1] = max(c[i+1][j], c[i][j+1]);
			}
		}
	}
	
	cout << c[m][n];
	return 0;
}