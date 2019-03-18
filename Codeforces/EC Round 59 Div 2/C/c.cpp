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

ll k,n;
ll v[200010];
vector<ll> vi;
string s;
ll ans;

int main(){	
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	
	cin>>n>>k;
	ans=0;
	forn(i,n){
		cin>>v[i];
		ans+=v[i];
	}
	cin>>s;
	vi.push_back(v[0]);
	forr(i,1,n){		
		if(s[i]==s[i-1]){vi.push_back(v[i]);}
		else{
			if(vi.size()>k){				
				sort(vi.begin(),vi.end());
				ll restar=0;
				ll hasta = vi.size()-k;
				forn(j,hasta)restar+=vi[j];				
				ans-=restar;
				vi.clear();
				vi.push_back(v[i]);
			}else{
				vi.clear();
				vi.push_back(v[i]);
			}
		}
	}
	
	if(vi.size()>k){				
		sort(vi.begin(),vi.end());
		ll restar=0;
		ll hasta = vi.size()-k;
		forn(j,hasta)restar+=vi[j];				
		ans-=restar;
	}
	
	cout << ans << "\n";
	
	return 0;
}

