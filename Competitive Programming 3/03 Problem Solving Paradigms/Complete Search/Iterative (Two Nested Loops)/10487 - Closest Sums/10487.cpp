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

int n,m,a[1010];
vector<int> vi;
	
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int c=1;
	while(cin>>n){
		if(n==0)return 0;
		forn(i,n)cin>>a[i];
		cin>>m;
		forn(i,n)
			forr(j,i+1,n)
				vi.pb(a[i]+a[j]);
		int s;		
		cout << "Case " << c++ << ":\n";
		while(m--){
			cin>>s;
			int mindif=(int)10e9;
			int ans=-1;
			forn(i,(int)vi.size()){
				int dif=abs(s-vi[i]);
				if(dif<mindif){
					ans=vi[i];
					mindif=dif;
				}
			}
			cout << "Closest sum to " << s << " is " << ans << ".\n";
		}
		vi.clear();
	}
    return 0;
}

