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

int n,v[50010];


int main(){	
	ios::sync_with_stdio(0);cin.tie(NULL);

	cin>>n;
	int total=0;
	forn(i,n){cin>>v[i];total+=v[i];}
	sort(v,v+n,greater<int>());
	int ans=total;
	forn(i,n){
		forr(j,1,v[i]){
			if(v[i]%j==0){
				ans=min(ans,total-abs(v[i]-(v[i]/j))+abs(v[n-1]-(v[n-1]*j)));
			}
		}
	}
	cout << ans;
	
	
	return 0;
}

