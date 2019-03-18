#include <bits/stdc++.h>
using namespace std;

#define INF 1e9
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int T,N,S,D,R;
int g[110][110];
int p[110][110];
void floyd(){
	forn(k,N)forn(i,N)forn(j,N)
		if(g[k][j]!=INF)
			if(g[i][k]+g[k][j]<g[i][j]){
				g[i][j]=g[i][k]+g[k][j];
				p[i][j]=k;
			}
}

int main(){
	//freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>T;
	int u,v;
	int c=1;
	while(T--){
		cin>>N>>R;
		forn(i,N)forn(j,N){g[i][j]=INF;p[i][j]=-1;}
		forn(i,N)g[i][i]=0;
		forn(i,R){
			cin>>u>>v;
			g[u][v]=g[v][u]=1;
		}
		cin>>S>>D;
		floyd();		
		int maxid=0;
		set<int> sp;
		forn(i,N){
			if(g[S][maxid]<g[S][i] && i!=D)maxid=i;
			else if(g[S][maxid]==g[S][i]&& g[D][i]>g[D][maxid] && i!=D)maxid=i;			
		}
		int ans=0;
		ans+=g[S][maxid];
		ans+=g[D][maxid];
		cout << "Case " << c++ << ": " << ans << "\n";
	}
	
	return 0;
}
