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

int t,n,a[maxn];
unordered_map<int,int> esta;
	
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
 
	cin>>t;
	while(t--){		
		cin>>n;
		int suma=0;
		ll ans=0;
		int maxi=-2000;				
		forn(i,n)cin>>a[i];			
		maxi=suma=a[0];
		forr(i,1,n){
			suma=max(a[i],suma+a[i]);
			maxi=max(maxi,suma);
		}
		/*cout << suma << " ---  suma\n";
		cout << maxi << " ---  maxi\n";*/
		suma=0;		
		forn(i,n){
			suma+=a[i];
			if(suma==maxi)ans++;
			ans+=esta[suma-maxi];
			esta[suma]++;
		}
		cout << maxi << " " << ans << "\n";
		esta.clear();
	}
 
    return 0;
}

