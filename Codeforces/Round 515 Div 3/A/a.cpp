#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)

const int MAXN=100100;
int n,L,v,l,r,t;

int main() {
    //freopen("entrada.txt", "r", stdin);
    ios::sync_with_stdio(0);cin.tie(NULL);
    
    cin>>t;
    while(t--){
		cin>>L>>v>>l>>r;
		int ans=L/v;
		int menos= (r/v) - ((l-1)/v);		
		cout << ans-menos << "\n";		
	}    
    return 0;
}

		
