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
const int maxn = 2000100;

ll n,m,k,x,s;
ll a[maxn],b[maxn],c[maxn],d[maxn];

int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    cin>>n>>m>>k>>x>>s;
    forr(i,1,m+1)cin>>a[i];
    forr(i,1,m+1)cin>>b[i];
    forr(i,1,k+1)cin>>c[i];
    forr(i,1,k+1)cin>>d[i];
    a[0]=x;
    b[0]=c[0]=d[0]=0;
        
	ll ans=1LL*n*x;	
	forn(i,m+1){
		if(s-b[i]>=0){
			int l=0,r=k;
			int mid=(l+r+1)/2;
			while(l<r){				
				if(d[mid]<=(s-b[i])){l=mid;}				
				else {r=mid-1;}					
				mid=(l+r+1)/2;
			}			
			ans=min(ans,1LL*a[i]*(n-c[l]));
		}
	}
	cout << ans;
 
    return 0;
}

