#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
typedef vector<int> vi;

vi g[110];
int st[110];
vi ts;

int N,M;

void dfs(int u){
	st[u]=1;
	for(auto v: g[u])
		if(st[v]==-1)
			dfs(v);
	ts.push_back(u);
}

int main(){
	//freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin>>N>>M){
		if(N==0 && M==0)return 0;
		forn(i,N+1)g[i+1].clear();
		int u,v;
		forn(i,M){
			cin>>u>>v;
			g[u].push_back(v);
		}
		memset(st,-1,sizeof(st));
		forn(i,N)
			if(st[i+1]==-1)
				dfs(i+1);
		reverse(ts.begin(),ts.end());
		cout << ts.front();
		for(int i=1;i<ts.size();i++)cout << " " << ts[i];
		ts.clear();
		cout << "\n";
	}		
		
	
	return 0;
}
