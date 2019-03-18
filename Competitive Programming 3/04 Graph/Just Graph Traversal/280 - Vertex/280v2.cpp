#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vii g[110];
int vst[110];
int n,u,v,s,nn;

void dfs(int i){
	vst[i]++;
	for(auto j: g[i]){
		if(j.first==s and vst[j.first]!=0)
			vst[j.first]++;
		else if(vst[j.first]==0)
			dfs(j.first);
	}
}

int main(){
	//freopen("entrada.txt","r",stdin);	
	//freopen("salida.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin>>n){
		if(n==0)return 0;		
		//memset(g,0,sizeof(g));
		for(int i=1;;i++){
			cin>>u;
			if(u==0)break;	
			cin>>v;		
			while(v!=0){
				ii p = {v,0};
				g[u].emplace_back(p);				
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
		for(int j=1;j<=n;j++)
			g[j].clear();
	}
	return 0;
}
