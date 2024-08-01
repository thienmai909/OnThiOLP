#include <iostream>
#include <vector>
#include <utility>

// std::vector<std::tuple<int, int, int>> CounrWarriors(int n, int q, const std::vector<int>& types, const std::vector<std::pair<int, int>>& queries) {
//     std::vector<int> s1(n+1, 0);
//     std::vector<int> s2(n+1, 0);
//     std::vector<int> s3(n+1, 0);

//     for (int i = 1; i <= n; i++) {
//         s1[i] = s1[i - 1] + (types[i - 1] == 1 ? 1 : 0);
//         s2[i] = s2[i - 1] + (types[i - 1] == 2 ? 1 : 0);
//         s3[i] = s3[i - 1] + (types[i - 1] == 3 ? 1 : 0);
//     }

//     std::vector<std::tuple<int, int, int>> results;
//     for (const auto& query : queries) {
//         int c1 = s1[query.second] - s1[query.first - 1];
//         int c2 = s2[query.second] - s2[query.first - 1];
//         int c3 = s3[query.second] - s3[query.first - 1];
//         results.push_back(std::make_tuple(c1, c2, c3));
//     }

//     return results;
// }

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, q; std::cin >> n >> q;
    std::vector<int> types(n);
    for (int i = 0; i < n; i++) std::cin >> types[i];
    std::vector<std::pair<int, int>> queries(q);
    for (int i = 0; i < q; i++) std::cin >> queries[i].first >> queries[i].second;

    std::vector<int> s1(n+1, 0);
    std::vector<int> s2(n+1, 0);
    std::vector<int> s3(n+1, 0);
    for (int i = 1; i <= n; i++) {
        s1[i] = s1[i - 1] + (types[i - 1] == 1 ? 1 : 0);
        s2[i] = s2[i - 1] + (types[i - 1] == 2 ? 1 : 0);
        s3[i] = s3[i - 1] + (types[i - 1] == 3 ? 1 : 0);
    }

    for (const auto& query : queries) {
        int c1 = s1[query.second] - s1[query.first - 1];
        int c2 = s2[query.second] - s2[query.first - 1];
        int c3 = s3[query.second] - s3[query.first - 1];
        std::cout << c1 << " " << c2 << " " << c3 << std::endl;
    }

    return 0;
}