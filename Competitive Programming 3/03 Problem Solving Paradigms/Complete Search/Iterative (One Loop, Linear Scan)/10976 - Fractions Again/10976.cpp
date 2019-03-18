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

ll k;
map<ll,ll> m;

int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    //freopen("salida.txt","w",stdout);

	ll x;
	ll ans=0;
	while(cin>>k){
		m[(k*2)]=(k*2);
		dfor(y,(k*2),2){
			if(y==k)continue;
			if((k*y)%abs(k-y)==0){
				x=k*y/abs(k-y);
				if((x*y)/(x+y)==k){
					ans++;				
					m[y]=x;
				}
			}
		}
		cout << m.size() << "\n";
		for(auto a: m)			
			cout << "1/" << k << " = 1/" << a.snd << " + 1/" << a.fst << "\n";
		m.clear();
	}
	
    return 0;
}

