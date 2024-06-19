#include<bits/stdc++.h>
using namespace std;

long long n, a[5005];

long long NhiPhan(int ll, int rr, long long x) {
    int l = ll;
    int r = rr;
    long long kq = l - 1;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (a[mid] < x) {
            kq = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    return kq;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    long long res = 0;
    for (int i = 1; i <= n - 2; i++)
        for (int j = i + 1; j <= n - 1; j++)
            res = res + NhiPhan(j + 1  , n, a[i] + a[j]) - j;
    cout << res;
}
//n*n*log(n)






