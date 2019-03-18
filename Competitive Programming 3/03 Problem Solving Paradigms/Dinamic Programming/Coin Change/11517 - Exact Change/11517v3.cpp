#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int memo[10005];
bool ready[10005];
int coins[105];
int T, price, N;

int dpchange(int value) {
    if (value == 0) return 0;
    if (value < 0) return INF;
    if(ready[value]) return memo[value];
    int best = INF;
    for (int i = 0; i < N; i++)
        best = min(best, dpchange(value-coins[i])+1);

    ready[value] = true;
    memo[value] = best;
    return best;
}


int main() {
    freopen("entrada.txt", "r", stdin);
    cin >> T;
    while (T--) {
        memset(ready, 0, sizeof ready);
        cin >> price >> N;
        for (int i = 0; i < N; i++)
            cin >> coins[i];
        cout << dpchange(price);
    }
    return 0;
}
