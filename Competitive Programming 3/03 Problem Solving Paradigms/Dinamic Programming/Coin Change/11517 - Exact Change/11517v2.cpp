#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int dp[20005], coins[105];
int T, N, price;

int main() {
    freopen("entrada.txt", "r", stdin);
    cin >> T;
    while (T--) {

        cin >> price >> N;
        for (int i = 0; i < N; i++)
            cin >> coins[i];
        /*dp[0] = 0;
        for (int j = 0; j < N; j++) {
            for (int i = 10000; i > -1; i--) {
                if (dp[i]!=INF and dp[i]+coins[j]<=10000 and dp[i+coins[j]] > dp[i]+1)
                    dp[i+coins[j]] = dp[i+1];
            }
        }*/
        fill_n(dp, 10005, INF);
        dp[0] = 1;
        for(int i = 0; i < N; i++)
            for(int j = coins[i]; j <= price; j++)
                dp[j] = min(dp[j], 1+dp[j-coins[i]]);

        cout << dp[price];

        /*for (int i = price; i <= 20000; i++) {
            if (dp[i] != INF) {
                cout << i << " " << dp[i] << endl;
                break;
            }
        }*/
    }
    return 0;
}
