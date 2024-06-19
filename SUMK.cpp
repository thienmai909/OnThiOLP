#include <iostream>
#include <vector>
using namespace std;
int n, k;
vector<int> arr;
int countWays = 0;
void backtrack(int idx, int sum) {
    if (idx == n) {
        if (sum == k) {
            countWays++;
        }
        return;
    }
    backtrack(idx + 1, sum + arr[idx]);
    backtrack(idx + 1, sum);
}
int main() {
    cin >> n >> k;
    arr.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    backtrack(0, 0);

    cout << countWays << endl;
    return 0;
}
