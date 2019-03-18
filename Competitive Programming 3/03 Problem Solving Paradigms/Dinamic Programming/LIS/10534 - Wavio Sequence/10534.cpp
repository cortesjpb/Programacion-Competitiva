#include <bits/stdc++.h>
using namespace std;

int v[10010],t,n,dp[10010],dp2[10010];

int f(int i){
	int &r=dp[i];
	if(r!=-1)return r;
	r=1;
	for(int j=0;j<i;j++)
		if(v[j]<v[i])
			r=max(r,f(j)+1);
	return r;
}

int fi(int i){
	int &r=dp2[i];
	if(r!=-1)return r;
	r=1;
	for(int j=n-1;j>=i;j--)
		if(v[j]<v[i])
			r=max(r,fi(j)+1);
	return r;
}


int main(){
	freopen("entrada.txt","r",stdin);
	while(scanf("%d",&n)!=EOF){		
		for(int i=0;i<n;i++)
			cin>>v[i];
		memset(dp,-1,sizeof(dp));
		memset(dp2,-1,sizeof(dp2));
		for(int i=0;i<n;i++)
			dp[i]=f(i);
		for(int i=n-1;i>=0;i--)
			dp2[i]=fi(i);
		int ans=-1;
		for(int i=0;i<n-1;i++){
			if(dp[i]<dp[i+1])
				ans =dp[i];
			else
				ans=max(ans,dp[i]+dp2[i+1]);
		}
		cout << ans <<"\n";
	}
	
	
	
	return 0;
}
