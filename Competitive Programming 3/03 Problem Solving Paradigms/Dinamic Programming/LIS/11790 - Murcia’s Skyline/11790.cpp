#include <bits/stdc++.h>
using namespace std;

int h[10010],w[10010],t,n,dp[10010];

int fi(int i){
	int &r=dp[i];
	if(r!=-1)return r;
	r=w[i];
	for(int j=0;j<i;j++)
		if(h[j]<h[i])
			r=max(r,dp[j]+w[i]);
	return r;
}

int fd(int i){
	int &r=dp[i];
	if(r!=-1)return r;
	r=w[i];
	for(int j=0;j<i;j++)
		if(h[j]>h[i])
			r=max(r,dp[j]+w[i]);
	return r;
}


int main(){
	//freopen("entrada.txt","r",stdin);
	cin>>t;
	int c=1;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>h[i];
		for(int i=0;i<n;i++)
			cin>>w[i];
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++)
			dp[i]=fi(i);
		long long maxfi=*max_element(dp,dp+n);
		//cout << maxfi << endl;
		
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<n;i++)
			dp[i]=fd(i);
		long long maxfd=*max_element(dp,dp+n);
		//cout << maxfd << endl;
		if(maxfi>=maxfd)
			printf("Case %d. Increasing (%lld). Decreasing (%lld).\n",c++,maxfi,maxfd);
		else
			printf("Case %d. Decreasing (%lld). Increasing (%lld).\n",c++,maxfd,maxfi);
	}
	
	
	
	return 0;
}
