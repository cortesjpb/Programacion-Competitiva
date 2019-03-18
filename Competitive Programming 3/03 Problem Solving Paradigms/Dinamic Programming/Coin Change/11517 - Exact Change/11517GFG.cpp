#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int memo[20005][105], coins[105];
int T, N, price;

int minCoins(int value, int k) {
	if(memo[value][k]!=-1) return memo[value][k];
	int r=INF;
   	if(coins[k-1]<=value)r=min(r,1+minCoins(value-coins[k-1],k-1));
	r = min(r,minCoins(value,k-1));
	memo[value][k]=r;
    return r;
}

int main() {
    freopen("entrada.txt", "r", stdin);
    cin >> T;
    while (T--) {
		memset(memo,-1,sizeof(memo));
		memo[0][0]=0;
		for(int i=1;i<20005;i++) {
			memo[i][0]=INF;
		}
        cin >> price >> N;
        for (int i = 0; i < N; i++) {
            cin >> coins[i];
		}
        for (int i = price; i <= 250000; i++) {
        	if (minCoins(i,N) != INF) {
            	cout << i << " " << minCoins(i,N) << endl;
        		break;
       	 	}
		}
    }
    return 0;
}
