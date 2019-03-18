#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define INF 100000

int n, v[110], dp[110][5];

int f(int i,int a){
	if(i>=n)return 0;
	if(dp[i][a]!=-1)return dp[i][a];
	int ans=999999;	
	if(v[i]==1){if(a!=1)ans=min(ans,f(i+1,1));}
	else if(v[i]==2){if(a!=2)ans=min(ans,f(i+1,2));}
	else if(v[i]==3){
		if(a==1){ans=min(ans,f(i+1,2));}
		else if(a==2){ans=min(ans,f(i+1,1));}
		else ans=min(f(i+1,1),f(i+1,2));
	}
	ans=min(ans,1+f(i+1,0));
	return dp[i][a]=ans;
}

int main(){
	
	cin>>n;
	forn(i,n)cin>>v[i];
	memset(dp,-1,sizeof(dp));
	cout << f(0,0) << "\n";
	return 0;
}
