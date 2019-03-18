#include <bits/stdc++.h>
using namespace std;

int coins[] = {1, 8, 27, 64, 125, 216, 343, 512, 729, 1000,
             1331, 1728, 2197, 2744, 3375, 4096, 4913, 5832,
             6859, 8000, 9261};
long long memo[10005][30];
int V;

long long ways(long long x, long long k) {
    if (x == 0) return 1;
    if (x < 0 || k == 21) return 0;
    if (memo[x][k] != -1) return memo[x][k];
    memo[x][k] = ways(x-coins[k], k) + ways(x, k+1);
    return memo[x][k];
}

int main() {
    memset(memo, -1, sizeof memo);
    while (cin >> V)
        cout << ways(V, 0) << endl;

    return 0;
}
