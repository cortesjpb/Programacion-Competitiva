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

ll n,a[300010],m,q[300010];
	
int main() {
    std::ios_base::sync_with_stdio(false);
 
	cin>>n;
	ll total=0;
	forn(i,n){cin>>a[i];total+=a[i];}
	cin>>m;
	forn(i,m)cin>>q[i];
	sort(a,a+n,greater<int>());
	//sort(q,q+m);
	
	forn(i,m){
		cout << total-a[q[i]-1] << "\n";
	}
 
    return 0;
}

