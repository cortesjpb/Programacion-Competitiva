#include <bits/stdc++.h>
using namespace std;
int m,n,t;
int dp[10010];
int main(){
	freopen("entrada.txt","r",stdin);
	
	while(scanf("%d %d %d",&m,&n,&t)==3){
		memset(dp,-1,sizeof(dp));
		dp[0]=0;
		for(int i=1;i<=t;i++){
			if(i>=m && dp[i-m]!=-1) dp[i]=1+dp[i-m];
			if(i>=n && dp[i-n]!=-1) dp[i]=max(1+dp[i-n],dp[i]);
		}
		if(dp[t]>=0) cout << dp[t]<<"\n";
		else
			for(int i=t;;i--)
				if(dp[i]!=-1){
					cout << dp[i] << " " << t-i << "\n";
					break;
				}				
	}
	return 0;
}
