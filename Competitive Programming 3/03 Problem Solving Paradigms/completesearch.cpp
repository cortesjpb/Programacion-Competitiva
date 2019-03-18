#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int memo[10005][105];
int coins[105];
int T, N, price;

int change(int x, int k) {
	if (x==0) return 0;
	if (x<0 || k==N) return INF;
	if (memo[x][k] != -1) return memo[x][k];
	int ans = INF;
	if(x>=coins[k]) ans = min(ans, 1+change(x-coins[k], k+1));
	ans = min(ans, change(x, k+1));
	return memo[x][k] = ans;
}


int main() {
	//freopen("entrada.txt", "r", stdin);
    cin >> T;
    while (T--) {
        memset(memo, -1, sizeof(memo));
        cin >> price >> N;
        for (int i = 0; i < N; i++)
            cin >> coins[i];
        for(int i = price; i <= 10000; i++) {
			if (change(i, 0) != INF) {
			    cout << i << " " << change(i, 0) << endl;
			    break;
			}
		}
	}

	return 0;
}
