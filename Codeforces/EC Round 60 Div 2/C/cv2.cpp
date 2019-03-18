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
const double EPS=1e-9;

ll xs,ys,xf,yf;
ll n;
string s;

#define x first
#define y second

ii day[100010];
ii st,fin;
map<char, ii> mov;

int main(){	
	ios::sync_with_stdio(0);cin.tie(NULL);

	mov['U']={0,1};
	mov['D']={0,-1};
	mov['L']={-1,0};
	mov['R']={1,0};
	
	cin>>st.x>>st.y>>fin.x>>fin.y>>n>>s;
	forn(i,n){
		day[i+1].x=day[i].x+mov[s[i]].x;
		day[i+1].y=day[i].y+mov[s[i]].y;
	}
	
	ll l=0,r=10e18,mid,rem;
	while(r-l>1){
		mid=(r+l)/2;
		ll cont=mid/n,rem=mid%n;
		ll newx=st.x+day[rem].x+cont*day[n].x;
		ll newy=st.y+day[rem].y+cont*day[n].y;
		ll dist=abs(newx-fin.x)+abs(newy-fin.y);
		if(dist<=mid)r=mid;
		else l=mid;
	}
	
	if(r>3e14)r=-1;
	cout << r << "\n";
	
	
	return 0;
}

