#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int memo[10005][105];
int coins[105];
int T, N, price;

int minCoins(int x, int k) {
    if (memo[x][k] != -1) return memo[x][k];
    int ans = INF;
    if (coins[k-1]<=x) ans = min(ans, 1+minCoins(x-coins[k-1], k-1));
    ans = min(ans, minCoins(x, k-1));
    return memo[x][k] = ans;
}


int main() {
    freopen("entrada.txt", "r", stdin);
    cin >> T;
    while (T--) {
        memset(memo, -1, sizeof(memo));
        memo[0][0] = 0;
        for (int i = 1; i < 10005; i++){
            memo[i][0] = INF;
            }
        cin >> price >> N;
        for (int i = 0; i < N; i++)
            cin >> coins[i];

        for (int i = price; i <= 10000; i++) {
            if (minCoins(i, N)!= INF) {
                cout << i << " " << minCoins(i, N) << endl;
                break;
            }
        }
    }
    return 0;
}
