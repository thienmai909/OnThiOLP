#include <bits/stdc++.h>
using namespace std;

int main() {
  size_t n, s;
  cin >> n;

  size_t a[n];
  
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }

  size_t k;
  cin >> k;
  s = 0;
  for (size_t i = 0; i < k; i++){
    s = s%1000000007 + a[i]%1000000007;
  }

  cout << s;
  return 0;
}
