#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b);i++)
#define dfor(i,a,b) for(int i=(a);i>=(b);i--)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) dfor(i,n,0)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;

int n,k,mod,T;
int a[1010];
ll expmod(ll b,ll e, ll m){
	if(!e)return 1;
	ll q=expmod(b,e/2,m);q=(q*q)%m;
	return e%2? (b*q)%m:q;
}

int main(){
	
	cin>>T;
	int caso=1;
	while(T--){
		cin>>n>>k>>mod;
		forn(i,n)cin>>a[i];
		ll cte= expmod(n,k-1,mod)*k;
		int ans=0;
		forn(i,n){
			ans = (ans + (a[i]%mod * cte%mod)%mod) % mod;
		}
		cout << "Case " << caso++ << ": " <<  ans << "\n";
	}
	
	return 0;
}
