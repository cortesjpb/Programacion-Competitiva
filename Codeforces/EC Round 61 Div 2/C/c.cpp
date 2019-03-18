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
#define l first
#define r second

int n,q;
ii plr[5010],p[5010];
int f[5010],s[5010],c[5010];


	
int main() {
    //std::ios_base::sync_with_stdio(false);
	
	cin>>n>>q;
	int l,r;
	forn(i,q){
		cin>>l>>r;
		plr[i]={l,r};
		s[l]++;s[r+1]--;
	}
	f[0]=0;
	forn(i,n)f[i+1]=f[i]+s[i+1];
	int e=0;
	forn(i,n){
		if(f[i+1]>1)c[i+1]=0;
		else if(f[i+1]==0)e++;
		else if(f[i+1]==1)c[i+1]=1;
	}
	c[0]=0;
	forn(i,n)c[i+1]=c[i]+c[i+1];
	forn(i,q)p[i]={c[plr[i].r]-c[plr[i].l-1]+e,i};	
	sort(p,p+q);
	int ans=p[0].l;
	forr(i,plr[p[0].r].l,plr[p[0].r].r+1)f[i]--;
	e=0;
	forn(i,n){
		if(f[i+1]>1)c[i+1]=0;
		else if(f[i+1]==0)e++;
		else if(f[i+1]==1)c[i+1]=1;
	}
	forn(i,n)c[i+1]=c[i]+c[i+1];
	ans+=c[plr[p[1].r].r]-c[plr[p[1].r].l-1]+e;
	cout << n-ans;
    return 0;
}
