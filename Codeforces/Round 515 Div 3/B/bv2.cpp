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
int n,r;
int v[1010],rm[1010];


int main() {
    //freopen("entrada.txt", "r", stdin);
    //ios::sync_with_stdio(0);cin.tie(NULL);
    cin>>n>>r;
    forn(i,n)cin>>v[i];
    int last=-1,ans=0;
    while(last<n-1){
		int pos=-1;
		for(int i=n-1;i>max(-1,last-r+1);i--){
			if(v[i]==1 && i-r<=last){
				pos=i;
				break;
			}
		}
		if(pos==-1){cout<<-1;return 0;}
		ans++;
		last=pos+r-1;
	}
	cout << ans << "\n";
    return 0;
}
