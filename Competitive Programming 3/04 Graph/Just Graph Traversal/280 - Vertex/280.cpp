#include <bits/stdc++.h>
using namespace std;

int g[110][110];
int vst[110];
int n,u,v,s,nn;

void dfs(int i){
	vst[i]++;
	for(int j=1;j<=n;j++){
		if(j==s and g[i][j]==1 and vst[j]!=0)
			vst[j]++;
		else if(g[i][j]==1 and vst[j]==0)
			dfs(j);
	}
}

int main(){
	//freopen("entrada.txt","r",stdin);	
	//freopen("salida.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin>>n){
		if(n==0)return 0;
		memset(g,0,sizeof(g));
		for(int i=1;;i++){
			cin>>u;
			if(u==0)break;	
			cin>>v;		
			while(v!=0){
				g[u][v]=1;				
				cin>>v;
			}
		}
		cin>>nn;
		for(int i=0;i<nn;i++){
			memset(vst,0,sizeof(vst));
			cin>>s;
			dfs(s);
			int ans=count(vst+1,vst+n+1,0);
			if(vst[s]<=1)ans++;
			cout << ans;
			for(int j=1;j<=n;j++){
				if(j==s and vst[j]<=1)cout << " " << j;
				else if(vst[j]==0)cout << " " << j;
			}
			cout << "\n";
		}
	}
	return 0;
}
