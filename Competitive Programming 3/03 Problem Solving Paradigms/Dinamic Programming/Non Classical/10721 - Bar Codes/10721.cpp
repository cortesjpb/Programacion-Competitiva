#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int N,K,M;
ll dp[60][60][60][5][5];
ll f(int n, int k, int m, int ant, int act){
	if(ant!=act){k++;m=1;}
	if(n>N || k>K || m>M)return 0;
	ll &r=dp[n][k][m][ant][act];
	if(r!=-1)return r;
	if(n==N and k==K)return 1;
	return r=f(n+1,k,m+1,act,1)+f(n+1,k,m+1,act,0);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);	
	while(cin>>N>>K>>M){
		memset(dp,-1,sizeof(dp));
		if(N<K){cout<<0<<"\n";continue;}
		cout << f(1,1,1,1,1)<<"\n";
	}
	return 0;
}
