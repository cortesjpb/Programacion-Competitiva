#include <bits/stdc++.h>
using namespace std;

long long dp[9505];
vector<int> coins = {1, 3, 4};
int N;

int main() {
    while (cin >> N) {
        dp[0] = 1;
        for (auto c: coins)
            for (int i = c; i <= N; i++) {
                dp[i] += dp[i-c];
        }
        cout << dp[N] << endl;
        memset(dp, 0, sizeof dp);
    }
    return 0;

}
