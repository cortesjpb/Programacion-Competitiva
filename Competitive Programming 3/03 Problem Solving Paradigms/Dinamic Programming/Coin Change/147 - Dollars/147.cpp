#include <bits/stdc++.h>
using namespace std;

float V;
int coins[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};
int v;

long long memo[30010][12];

long long ways(int x, int k) {
    if (x == 0) return 1;
    if (x< 0 || k == 11) return 0;
    if (memo[x][k] != -1) return memo[x][k];
    memo[x][k] = ways(x-coins[k], k)+ ways(x, k+1);
    return memo[x][k];
}

int main() {
    //freopen("entrada.txt", "r", stdin);
    memset(memo, -1, sizeof memo);
    while(cin >> V) {
        if (V == 0.0)
            break;
        v = (V*100.0)+0.5;
        long long resultado = ways(v, 0);
        printf("%6.2f6%lld\n", V, resultado);
    }
    return 0;
}
