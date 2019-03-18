#include <bits/stdc++.h>
using namespace std;

vector<int> g[250];
vector<string> vs;
string s,src, dest;
int T,vst[250];
map<string,int> m;

int bfs(int s){
	vector<int>dist(vs.size()+1,0);dist[s]=0;vst[s]++;
	queue<int>q;q.push(s);
	while(!q.empty()){
		int u=q.front();q.pop();
		for(auto v: g[u]){
			if(vst[v]==-1){
				vst[v]++;
				dist[v]=dist[u]+1;
				q.push(v);
			}
		}
	}	
	return dist[m[dest]];
	
}


int main(){
	freopen("entrada.txt","r",stdin);
	freopen("salida.txt","w",stdout);
	
	cin>>T;
	while(T--){		
		int v=0;		
		while(cin>>s,s!="*"){
			m[s]=v++;
			vs.push_back(s);
		}
		
		for(int i=0;i<vs.size();i++){
			for(int j=i+1;j<vs.size();j++){
				if(vs[i].length()==vs[j].length()){
					int dif=0;
					for(int k=0;k<vs[i].size();k++)
						if(vs[i][k]!=vs[j][k])
							dif++;
					if(dif==1){
						g[m[vs[i]]].push_back(m[vs[j]]);
						g[m[vs[j]]].push_back(m[vs[i]]);
					}
				}
			}
		}		
		
		string line;
		getline(cin,line);
		while(getline(cin,line) && line!=""){
			stringstream ss(line);
			ss>>src>>dest;			
			memset(vst,-1,sizeof(vst));
			cout << src << " " << dest << " " << bfs(m[src]) << "\n";
		}
		for(int i=0;i<vs.size();i++)g[i].clear();
		vs.clear();
		if(T)cout << "\n";
	}
	return 0;
}
