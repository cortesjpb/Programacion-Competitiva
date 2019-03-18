#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
int t,N,dp[11010];
int f(int n){	
	//cout << n << " -----------" <<endl;
	int &r=dp[n];
	if(n==0)return 0;		
	if(r!=-1)return r;
	int ans=INF;
	for(int i=sqrt(n);i>=1;i--)
		if(n-pow(i,2)>=0)
			ans=min(ans,1+f(n-pow(i,2)));		
	return r=ans;
}
int main(){
	//freopen("entrada.txt","r",stdin);
	//ios::sync_with_stdio(0);
	//cin.tie(NULL);
	cin>>t;
	memset(dp,-1,sizeof(dp));
	while(t--){		
		cin>>N;		
		cout << f(N)<<"\n";
	}
	return 0;
}
