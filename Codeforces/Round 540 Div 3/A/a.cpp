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

ll q,n,a,b;



int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>q;
	while(q--){
		cin>>n>>a>>b;
		map<ll,ll>cost;
		cost[a]=1;
		cost[b]=2;
		ll ans=0;
		if(b<2*a){
			ans+=(n/2)*b;
			n%=2;
			ans+=(n*a);
		}else{
			ans+=n*a;
		}
		cout << ans << "\n";
	}
	return 0;
}

