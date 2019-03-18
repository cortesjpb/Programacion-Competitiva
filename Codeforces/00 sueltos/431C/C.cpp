#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define MOD 1000000007
typedef long long ll;

ll N,K,D,dp[110][3];

ll f(int n, int d){
	if(n>N)return 0;
	ll &r=dp[n][d];
	if(r!=-1)return r;
	if(n==N && d==1)return 1;
	ll ans=0;	
	forr(i,1,K+1){
		if(i>=D)ans=(ans+f(n+i,1))%MOD;			
		else ans=(ans+f(n+i,d))%MOD;
	}
	return r=ans;
} 



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>N>>K>>D;
	memset(dp,-1,sizeof(dp));
	cout << f(0,0) << "\n";
	return 0;
}
