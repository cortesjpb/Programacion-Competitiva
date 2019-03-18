#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
 
int E;
vi g[3000];
int vst[3000],freq[3000];

void bfs(int s){
	vi dist(E+1,0);dist[s]=0;vst[s]=1;
	memset(freq,0,sizeof(freq));
	queue<int> q;q.push(s);
	while(!q.empty()){
		int u=q.front();q.pop();
		for(auto v: g[u])
			if(vst[v]==-1){
				vst[v]=1;
				dist[v]=dist[u]+1;
				freq[dist[u]+1]++;
				q.push(v);
			}		
	}
	int ans=*max_element(freq,freq+E);
	if(ans==0)cout << 0 << "\n";
	else cout << ans << " " << max_element(freq,freq+E)-freq << "\n";
}
 
int main() {
	freopen("entrada.txt","r",stdin);
	cin>>E;
	int u,v,nv;
	for(int i=0;i<E;i++){
		cin>>nv;
		for(int j=0;j<nv;j++){
			cin>>v;
			g[i].push_back(v);
		}
	}
	int t;
	cin>>t;
	while(t--){
		int s;
		cin>>s;
		memset(vst,-1,sizeof(vst));
		bfs(s);
	} 
	return 0;
}
