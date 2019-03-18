#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int memo[505][7];
int coins[] = {5, 10, 20, 50, 100, 200};
int a[6];
float V;

int minCoins(int x, int k) {
    if (memo[x][k] != -1) return memo[x][k];
    int r = INF;
    if (a[k-1]>0 and coins[k-1]<=x) {
        a[k-1]--;
        r=min(r, minCoins(1+x-coins[k-1], k));
        a[k-1]++;
    }
    r= min(r, minCoins(x, k-1));
    return memo[x][k] = r;
}

int main() {
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]  >> a[5] >> V) {
        memset(memo, -1, sizeof memo);
        memo[0][0] = 0;
        for (int i = 1; i < 505; i++)
            memo[i][0] = INF;
        int v = (V*100)+0.5;
        int resultado = minCoins(v, 6);
        cout << resultado << endl;
    }
}
