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
int s[5010],f[5010],L[5010],R[5010],c[5010];


int main(){
	
	cin>>n>>q;
	int ans=-1;
	forr(i,1,q+1)cin>>L[i]>>R[i];
	
	forr(i,1,q+1){
		int ceros=0;
		zero(s);zero(f);
		forr(j,1,q+1){
			if(i==j)continue;
			s[L[j]]++;s[R[j]+1]--;			
		}
		f[0]=0;
		forr(j,1,n+1)f[j]=f[j-1]+s[j];
		zero(c);
		c[0]=0;
		forr(j,1,n+1){
			c[j]=(f[j]==1);
			if(f[j]==0)ceros++;
		}
		forr(j,1,n+1)c[j]=c[j-1]+c[j];
		forr(j,1,q+1){
			if(i==j)continue;
			int total=n-(c[R[j]]-c[L[j]-1])-ceros;
			ans=max(total,ans);
		}
	}
	cout << ans;
	
	return 0;
}
