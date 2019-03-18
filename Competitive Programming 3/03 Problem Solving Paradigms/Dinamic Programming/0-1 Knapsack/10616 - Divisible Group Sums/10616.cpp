#include <bits/stdc++.h>
using namespace std;

int n, q, d, m;
int N[205];
long long dp[205][205][15];


long long value(int i, int x, int c) {
	if(c==m && x==0) return 1;
	if(c==m && x!=0) return 0;
	if(i==n) return 0;
	if(dp[i][x][c]!=-1) return dp[i][x][c];
	dp[i][x][c]=value(i+1, x%d, c) + value(i+1, (x+N[i])%d,c+1);
	return dp[i][x][c];
	
}


int main() {
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	int set = 1;
	while(cin >> n >> q) {
		int query=1;
		if(n==0 and q==0) return 0;
		cout << "SET " << set << ":" << endl;
		for (int i = 0; i < n; i++)
		    cin >> N[i];		
		while(q--){
			memset(dp, -1, sizeof dp);
			cin >> d >> m;
			long long ans = value(0,0,0);
			cout << "QUERY " << query << ": " << ans << endl;	
			query++;		
		}
		set++;
	}
	return 0;
}
