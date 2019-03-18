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
#define dbg(v) cout << #v" = "<<v<<endl//;)
typedef long long ll;
typedef pair<int,int> ii;

ll n,k,m,v[200010];
ll uses[200010];

int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n>>m>>k;
	forn(i,n)cin>>v[i];
	sort(v,v+n,greater<int>());
	ll ans=0;

	ans+=(v[1]*(m/(k+1)));
	ans+=(v[0]*(m-(m/(k+1))));
	
	
	cout << ans;
	
	return 0;
}

