#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

typedef vector<int> vi;

int N,dp[50],vst[50];
vi g[50],topo;

void dfs(int u){
	vst[u]=1;
	for(auto v:g[u])
		if(vst[v]==-1)
			dfs(v);
	topo.push_back(u);	
}

int f(int u){
	if(u==N)return 1;
	if(dp[u]!=-1)return dp[u];
	dp[u]=0;
	for(auto v: g[u])
		dp[u]+=f(v);
	return dp[u];	
}


int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int c=0;
	while(cin>>N){
		int sz,v;
		forn(i,N){
			cin>>sz;
			if(sz==0){
				g[i].push_back(N);
			}
			else{
				forn(j,sz){
					cin>>v;
					g[i].push_back(v);
				}
			}
		}
		memset(vst,-1,sizeof(vst));
		dfs(0);
		reverse(topo.begin(),topo.end());
		memset(dp,-1,sizeof(dp));	
	
		for(auto v:topo)
			if(dp[v]==-1)f(v);
		
		if(c++>0)cout<<"\n";
		cout << dp[0]<<"\n";
		forn(i,N)g[i].clear();
		topo.clear();
		
	}
	return 0;
}
