#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define INF 1e9

int g[110][110];
int nodos[110];

int main(){
	//freopen("entrada.txt","r",stdin);
	int a,b,maxn=-999,total,c=1;
	while(cin>>a>>b){
		total=0;
		forn(i,110)forn(j,110)g[i][j]=INF;
		memset(nodos,0,sizeof(nodos));
		if(a==0 && b==0)return 0;
		g[a][b]=1;
		maxn=max(maxn,max(a,b));
		while(cin>>a>>b){
			if(a==0 && b==0)break;
			g[a][b]=1;
			if(nodos[a]!=1){total++,nodos[a]=1;}
			if(nodos[b]!=1){total++,nodos[b]=1;}
			maxn=max(maxn,max(a,b));
		}
		maxn++;
		forn(k,maxn)forn(i,maxn)forn(j,maxn)g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
		int ans=0;
		forn(i,maxn)forn(j,maxn)if(g[i][j]!=INF && i!=j)ans+=g[i][j];		
		maxn--;
		int deno=(total*total)-total;		
		printf("Case %d: average length between pages = %.3f clicks\n",c++,(float)ans/deno);
	}
	return 0;
}
