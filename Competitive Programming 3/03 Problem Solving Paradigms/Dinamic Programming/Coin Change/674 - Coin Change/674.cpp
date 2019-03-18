#include <bits/stdc++.h>
using namespace std;

int N = 5, V;
vector<int> coins = {1, 5, 10, 25, 50};
int memo[6][7500];

long long ways(int type, int value) {
    if (value == 0) return 1;
    if (value < 0 || type == N) return 0;
    if (memo[type][value] != -1) return memo[type][value];
    return memo[type][value] = ways(type, value-coins[type]) + ways(type+1, value);
}

int main() {
    memset(memo, -1, sizeof(memo));
    while(scanf("%d", &V) != EOF)
        cout << ways(0, V) << endl;
    return 0;
}
