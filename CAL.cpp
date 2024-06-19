#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, t;
    cin >> n;
    t = 0;
    for (long long i = 1; i <= n; i++)
        for (long long j = 1; j <= n; j++)
            for (long long k = 1; k <= n; k++)
                for (long long x = 1; x <= n; x++)
                    for (long long y = 1; y <= n; y++)
                        t = t%10007 + (abs(i-j) * abs(j-k) * abs(k-x) * abs(x-y) * abs(y-i))%10007;

    return 0;
}