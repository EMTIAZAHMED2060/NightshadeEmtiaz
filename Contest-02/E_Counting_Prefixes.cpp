#include <iostream>
#include <vector>

using namespace std;
const int MOD = 998244353;

int countArrays(int n, const vector<int>& p) {
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j >= p[i - 1]) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - p[i - 1]]) % MOD;
            }
        }
    }

    return dp[n][n];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        int result = countArrays(n, p);
        cout << result << endl;
    }

    return 0;
}
