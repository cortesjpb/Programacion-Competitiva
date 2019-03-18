#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define MOD 1000000007

int t,k,a,b;
long long dp[100100],tabla[100100];
long long f(int n){
	if(n<0)return 0;
	if(n==0)return 1;
	if(dp[n]!=-1)return dp[n];
	return dp[n]=(f(n-k)+f(n-1))%MOD;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>t>>k;
	memset(dp,-1,sizeof(dp));	
	forn(i,100010)dp[i]=f(i);
	dp[0]=0;tabla[0]=0;
	forr(i,1,100010)tabla[i]=(dp[i]+tabla[i-1])%MOD;			
	while(t--){
		cin>>a>>b;		
		cout << abs(tabla[b]-tabla[a-1]+MOD)%MOD << "\n";
	}
	return 0;
}
