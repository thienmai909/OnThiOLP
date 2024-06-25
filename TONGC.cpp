#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using ull = unsigned long long;

int main(){
    ull n, k;
    cin >> n >> k;

    vector<ull> a(n);
    for (ull i = 0; i < n; i++){
        cin >> a[i];
    }

    unordered_map<ull, int> prefix_count;
    prefix_count[0] = 1;

    ull prefix_sum = 0;
    int count = 0;

    for (ull i = 0; i < n; i++){
        prefix_sum += a[i];
        long long target = prefix_sum - k;

        if (prefix_count.find(target) != prefix_count.end()){
            count += prefix_count[target];
        }

        prefix_count[prefix_sum]++;
    }

    cout << count << endl;
    return 0;
}