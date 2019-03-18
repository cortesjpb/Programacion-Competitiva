#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

typedef vector<int> vi;

vi g[510];
int vst[510];
int dist[510];
int n,m,t,mini,cont;
bool ciclo;


void bfs(int s){
	queue<int> q;
	q.push(s);vst[s]=1;
	while(!q.empty()){
		int u=q.front();q.pop();
	}
	
	
}



int main(){
	freopen("A.txt","r",stdin);
	cin>>t;
	int c=1;
	while(t--){
		memset(state,-1,sizeof(state));
		cin>>n>>m;
		int u,v;
		forn(i,m){			
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		mini=10e9;cont=0;ciclo=false;
		dfs(0,0);
		if(ciclo==false)cout<<"impossible\n";
		else cout << mini << "\n";
		forn(i,n)g[i].clear();
	}
	
	
	return 0;
}
