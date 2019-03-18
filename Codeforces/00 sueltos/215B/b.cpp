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
const int maxn = 100010;

int n,m,a[maxn],esta[maxn],pref[maxn];

	
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	cin>>n>>m;
	forn(i,n)cin>>a[i];
	int cont=0;
	dforn(i,n){
		if(!esta[a[i]])cont++;
		esta[a[i]]++;
		pref[i]=cont;
	}
	int l;	
	while(m--){
		cin>>l;
		cout << pref[l-1] <<"\n";
	}
	
    return 0;
}
