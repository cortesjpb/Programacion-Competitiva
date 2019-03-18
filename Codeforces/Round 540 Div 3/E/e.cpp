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

ll n,m,v[200010];

int main(){	
	ios::sync_with_stdio(0);cin.tie(NULL);

	cin>>n>>m;
	ll total=0;
	forn(i,n){cin>>v[i];total+=v[i];}
	if(total<m){cout<<-1;return 0;}
	sort(v,v+n,greater<ll>());
	
	ll left=1,rigth=n;
	ll mid=(left+rigth)/2;
	ll k=0;
	ll acum=0;
	ll ans=999999999;
	while(left<=rigth){		
		k=0;
		acum=0;
		forn(j,n){
			if(v[j]-k<0)break;
			acum+=max((ll)0,v[j]-k);
			if((j+1)%mid==0)k++;
		}		
		if(acum>=m){ans=min(ans,mid);rigth=mid-1;}
		else left=mid+1;	
		mid=(rigth+left)/2;	
	}
	if(left==1 && rigth==1){cout<<-1;return 0;}
	else cout<<ans;	
	
	return 0;
}


