#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b);i++)
#define dfor(i,a,b) for(int i=(a);i>=(b);i--)
#define forn(i,n) forr(i,0,n)
#define dforc(i,n) dfor(i,n,0)
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


char s[15];
int N,M;
int dp[1815];
map<ii,int> mp;
vector<ii> g[1815];


int dfs(int u){
	
	if(dp[u]!=-1)return dp[u];
	int ans=(g[u].size())?10e9:0;
	for(auto v: g[u]){
		/*if(ans>v.second+dfs(v.first)){
			cout << v.second << " esto es w " << endl;
			ans = v.second+dfs(v.first);
		}*/
		ans=min(ans,v.second+dfs(v.first));
	}
	return dp[u]=ans;
}



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	//freopen("entrada.txt","r",stdin);
	
	while(scanf("%s",&s)!=EOF){
		memset(dp,-1,sizeof(dp));
		cin>>N>>M;
		int nodos=0;
		forn(i,N){
			forn(j,M){
				mp[{i,j}]=nodos++;
			}
		}
		int w;
		forn(i,N-1){
			forn(j,M){
				forn(k,M){
					cin>>w;
					g[mp[{i,j}]].push_back({mp[{i+1,k}],w+2});
				}
			}
		}
		
		/*forn(i,N*M){
			cout << i << " --- " << endl;
			for(auto v:g[i])
				cout << v.first << " " << v.second << endl;
		}
		*/
		int mini=10e9;
		forn(i,M)
			mini=min(mini,dfs(i));
		cout << s << "\n";
		cout << mini << "\n";
		mp.clear();
		forn(i,N*M)g[i].clear();
		
		
	}
	
	
	return 0;
}
