#include <bits/stdc++.h>
using namespace std;

int v[33000],num,n,dp[33000];

int f(int i){
	if(i==0)return 1;
	int ans=1;
	for(int j=0;j<i;j++)
		if(v[j]>v[i])
			ans=max(ans,f(j)+1);
	return dp[i]=ans;
}

int main(){	
	freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int c=1;
	while(cin>>v[0]){
		if(v[0]==-1) return 0;
		n=1;
		while(cin>>v[n]){
			if(v[n]==-1) break;
			n++;
		}		
		/**for(int i=0;i<n;i++){
			dp[i]=1;
			for(int j=0;j<i;j++)				
			    if(v[j]>v[i] and dp[i]<dp[j]+1)
			        dp[i]=dp[j]+1;
		}*/
		f(n-1);
		if(c>1) cout<<"\n";
		cout << "Test #" << c++ << ":\n  maximum possible interceptions: " << *max_element(dp,dp+n) << "\n";
	}
	return 0;
}
