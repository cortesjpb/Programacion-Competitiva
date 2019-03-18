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


	
int32_t main() {
    std::ios_base::sync_with_stdio(false);
	
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	
	if(c>0){
		if(a>0 && d>0 && a==d){cout << 1;return 0;}
	}else{
		if(a==d	){cout << 1;return 0;}
	}
	cout << 0;
 
 
    return 0;
}
