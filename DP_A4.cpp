#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
    }
    
    int T;
    cin >> T;
    
    while (T--) {
        int L, R;
        cin >> L >> R;
        
        // In ra t?ng c?a do?n t? L d?n R
        cout << prefix_sum[R] - prefix_sum[L - 1] << endl;
    }
    
    return 0;
}
