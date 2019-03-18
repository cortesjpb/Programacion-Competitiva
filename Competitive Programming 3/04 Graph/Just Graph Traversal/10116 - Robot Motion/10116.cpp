#include <bits/stdc++.h>
using namespace std;
#define INF 10e8

struct node{
	int x,y,px,py,n;
};

char g[12][12];
node ans[12][12], prevans,res;
bool buc;
int M,N,S;

void dfs(node v){
	if(res.x!=99)return;
	if(v.x<0 || v.x==M || v.y<0 || v.y==N){		
		res = ans[v.px][v.py];
		return;		
	}
	if(ans[v.x][v.y].n!=INF){
		buc=1;
		prevans=ans[v.px][v.py];
		res=ans[v.x][v.y];
		return;
	}	
	ans[v.x][v.y]=v;
	node nxt;
	switch(g[v.x][v.y]){
		case 'N':
				nxt={v.x-1,v.y,v.x,v.y,v.n+1};
				dfs(nxt);
				break;
		case 'S':
				nxt={v.x+1,v.y,v.x,v.y,v.n+1};
				dfs(nxt);
				break;
		case 'W':
				nxt={v.x,v.y-1,v.x,v.y,v.n+1};
				dfs(nxt);
				break;
		case 'E':
				nxt={v.x,v.y+1,v.x,v.y,v.n+1};
				dfs(nxt);
				break;
		default:
				break;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin>>M>>N>>S){
		if(M==0 and N==0 and S==0)return 0;
		for(int i=0;i<M;i++)
			for(int j=0;j<N;j++)
				cin>>g[i][j];
				
		for(int i=0;i<=M;i++)
			for(int j=0;j<=N;j++)
				ans[i][j].n=INF;
		node v={0,S-1,0,S-1,0};
		//ans[0][S-1].n=0;
		//ans[0][S-1]={0,S-1,0,S-1,-1};
		res.x=99;res.y=99;buc=0;
		dfs(v);
		if(buc)cout << res.n << " step(s) before a loop of " << (prevans.n+1)-res.n << " step(s)\n";
		else cout << res.n+1 << " step(s) to exit\n";
	}
	return 0;
}
