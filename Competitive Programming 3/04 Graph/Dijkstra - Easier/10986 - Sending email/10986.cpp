#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define INF 1e9

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long long ll;

int n,m,s,t,test;
vii g[20100];

ll dijkstra(int x){
	vi dist(n,INF); dist[x]=0;
	//priority_queue<ii, vector<ii>, greater<ii>> pq;pq.push({0,x});
	priority_queue<pair<int,int>>pq;pq.push({0,x});
	while(!pq.empty()){
		//ii front=pq.top();pq.pop();
		int d=-pq.top().first, u=pq.top().second;pq.pop();
		//x=pq.top().second; ll d=-pq.top().first;pq.pop();
		if(d>dist[u])continue;
		for (int j = 0; j < (int)g[u].size(); j++){
			ii v=g[u][j];
			if(dist[u]+v.second<dist[v.first]){
				dist[v.first]=dist[u]+v.second;
				pq.push({-dist[v.first],v.first});
			}
		}
	}
	return dist[t];
}

int main(){
	freopen("entrada.txt","r",stdin);
	cin>>test;
	int c=1;
	while(test--){
		cin>>n>>m>>s>>t;
		int u,v,d;
		forn(i,m){
			cin>>u>>v>>d;
			//cout << u << " " << v << " " << d << endl;
			g[u].push_back(ii(v,d));
			g[v].push_back(ii(u,d));
		}
		
		int ans=dijkstra(s);
		if(ans==INF)printf("Case #%d: unreachable\n",c++);
		else printf("Case #%d: %d\n",c++,ans);
			
		forn(i,n) g[i].clear();
	}
	return 0;
}
