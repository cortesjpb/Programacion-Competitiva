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
const int maxn = 10010;

int t,d,q,l[maxn],h[maxn];
vector<string> vs(maxn);
	
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	cin>>t;
	while(t--){
		cin>>d;
		forn(i,d)cin>>vs[i]>>l[i]>>h[i];
		int ans=0,ind;
		cin>>q;
		int p;
		while(q--){
			ans=0;
			cin>>p;
			forn(i,d){				
				if(p>=l[i] && p<=h[i]){
					ans++;
					ind=i;
				}
				if(ans>1)break;
			}
			if(ans==1)cout << vs[ind] << "\n";
			else cout << "UNDETERMINED\n";
		}
		if(t>0)cout<<"\n";
	}
 
    return 0;
}

