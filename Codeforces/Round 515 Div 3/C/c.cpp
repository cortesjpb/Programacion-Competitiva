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
int q,id;
int v[200010];
int l,r;
char c;
int main() {
    //freopen("entrada.txt", "r", stdin);
    //ios::sync_with_stdio(0);cin.tie(NULL);
    
    cin>>q;
    cin>>c>>id;
    v[id]=0;
    l=-1;r=1;
    q--;
    while(q--){
		cin>>c>>id;
		if(c=='L'){
			v[id]=l;
			l--;
		}
		if(c=='R'){
			v[id]=r;
			r++;
		}
		if(c=='?'){
			cout << min(abs(v[id]-l),abs(v[id]-r))-1<<"\n";
		}
	}
        
    
    return 0;
}
