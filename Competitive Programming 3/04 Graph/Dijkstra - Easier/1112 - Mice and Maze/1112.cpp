#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;


int cases,n,e,t,m;
vii g[110];
vi dist(110);

void dijkstra(int s){
	forn(i,n+1)dist[i]=INF;dist[s]=0;
	priority_queue<ii,vector<ii>,greater<ii>>pq;pq.push({0,s});
	while(!pq.empty()){
		ii f=pq.top();pq.pop();
		int d=f.first, u=f.second;
		if(d>dist[u])continue;		
		for(auto v: g[u]){
			if(dist[u]+v.second<dist[v.first]){
				dist[v.first]=dist[u]+v.second;
				pq.push({dist[v.first],v.first});
			}
		}
	}
}

int main(){
	freopen("entrada.txt","r",stdin);
	
	cin>>cases;
	while(cases--){
		cin>>n>>e>>t>>m;
		
		int u,v,w;
		forn(i,m){
			cin>>u>>v>>w;
			g[u].push_back({v,w});
		}
		
		int ans=0;
		forn(i,n+1){
			dijkstra(i+1);
			if(dist[e]<=t)ans++;
		}
		cout << ans << "\n";
		if(cases)cout<<"\n" ;
		forn(i,n+1)g[i].clear();
	}
	return 0;
}
