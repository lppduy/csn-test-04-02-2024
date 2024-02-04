#include <iostream>
#include <vector>

const int MOD = 1000000007; // Modulo value to prevent overflow

int countWaysToScore(int x, int y) {
    std::vector<std::vector<int> > dp(x + 1, std::vector<int>(y + 1, 0));


    // Initialize base case
    dp[0][0] = 1;

    // Calculate number of ways using dynamic programming
    for (int i = 0; i <= x; ++i) {
        for (int j = 0; j <= y; ++j) {
            if (i > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            }
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    return dp[x][y];
}

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int> > testCases;

    for (int i = 0; i < N; ++i) {
        int x, y;
        std::cin >> x >> y;
        testCases.emplace_back(x, y);
    }

    for (const auto& testCase : testCases) {
        int ways = countWaysToScore(testCase.first, testCase.second);
        std::cout << ways << std::endl;
    }

    return 0;
}
