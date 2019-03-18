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

int q;
unordered_set<string> v;
unordered_map<string,string> ft,ans;

int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);

	cin>>q;
	string a,b;
	while(q--){
		cin>>a>>b;
		v.insert(b);
		if(v.count(a)){
			ft[b]=ft[a];
			ans[ft[a]]=b;			
		}else{
			ft[b]=a;
			ans[a]=b;
		}
	}
	cout << ans.size() << "\n";
	for(auto c: ans)
		cout << c.fst << " " << c.snd << "\n";
    return 0;
}

