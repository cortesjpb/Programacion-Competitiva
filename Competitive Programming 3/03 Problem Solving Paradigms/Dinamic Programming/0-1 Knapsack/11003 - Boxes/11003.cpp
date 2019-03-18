#include <bits/stdc++.h>
using namespace std;

int N, w[1005], maxw[1005];
int dp[3005][1005];

int value(int x, int i, bool primero){
	if(i==N||x==0) return 0;
	if(dp[x][i]!=-1) return dp[x][i];
	if(w[i]>x) return dp[x][i] = value(x,i+1);
	return dp[x][i] = max(value(x,i+1),1+value(min(x-w[i],maxw[i]),i+1));
}

int main(){
	//freopen("entrada.txt","r",stdin);
	while(cin >> N){
		if(N==0) return 0;
		memset(dp, -1, sizeof dp);
		for (int i = 0; i < N; i++)
		    cin >> w[i] >> maxw[i];
		int ans=0;
		for(int i = 0; i < N; i++)
		    ans = max(ans, 1+value(maxw[i],i+1));
		cout << ans << endl;
	}
	return 0;
}
