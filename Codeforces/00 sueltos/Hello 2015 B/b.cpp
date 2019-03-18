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
const int maxn = 100010;
#define MOD 1000000007

ll n,q,funo,fdos,a,b;
ll x[maxn];
ll s[maxn],p[maxn],f[maxn];
	
int main() {
    //std::ios_base::sync_with_stdio(false);cin.tie(NULL);

	cin>>n>>q;
	cin>>funo>>fdos>>a>>b;
	forr(i,1,n+1)cin>>x[i];
	f[1]=funo;f[2]=fdos;
	forr(i,3,n+1)f[i]=(((a*f[i-2])%MOD) + ((b*f[i-1])%MOD));
	int l,r;
	while(q--){
		cin>>l>>r;
		
	}
 
    return 0;
}
