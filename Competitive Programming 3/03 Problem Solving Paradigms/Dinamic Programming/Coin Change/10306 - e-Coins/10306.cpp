#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int N, M, S, x, y;
int coins[50];
int memo[90005][50];

int minCoins(int x, int k) {
	if (memo[x][k] != -1) return memo[x][k];
	int ans = INF;
	if (coins[k-1]<=x) ans = min(ans, 1+minCoins(x-coins[k-1], k));
	ans = min(ans, minCoins(x, k-1));
	return memo[x][k] = ans;
}


int main() {
	freopen("entrada.txt", "r", stdin);
	cin >> N;
	while (N--) {
		cin >> M >> S;
		S = S*S;
		for (int i = 0; i < M; i++) {
			cin >> x >> y;
			coins[i] = (x*x)+(y*y);
		}
		memset(memo, -1, sizeof memo);
		memo[0][0] = 0;
		for (int i = 1; i <= 90000; i++) 
			memo[i][0] = INF;
		int resultado = minCoins(S, M);
		if(resultado == INF)
		    cout << "not possible" << endl;
		else
		    cout << resultado << endl;
	}
	return 0;
}
