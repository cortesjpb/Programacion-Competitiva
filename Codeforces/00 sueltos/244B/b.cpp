#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b);i++)
#define dfor(i,a,b) for(int i=(a)-1;i>=(b);i--)
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
const int maxn = 200010;

int n,t,c,pref[maxn],a[maxn];
	
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);

	cin>>n>>t>>c;
	forn(i,n)cin>>a[i];
	int cont=0;
	forn(i,n){
		if(a[i]>t)cont++;
		pref[i]=cont;
	}
	int l=0,r=c-1;
	int ans=0;
	while(r<n){
		if(pref[r]-pref[l]==0 && a[l]<=t && a[r]<=t)ans++;			
		r++;l++;
	}
	cout << ans;
    return 0;
}
