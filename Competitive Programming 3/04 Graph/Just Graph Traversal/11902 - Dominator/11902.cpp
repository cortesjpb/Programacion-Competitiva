#include <bits/stdc++.h>
using namespace std;


int g[110][110], ans[110][110];
int vst[110];
int t,n,D;

void dfs(int v){
	if(v==D)return;
	vst[v]=1;
	for(int i=0;i<n;i++){		
		if(g[v][i]==1 and vst[i]==-1)
			dfs(i);
	}
}

int main(){
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin>>t;
	int c=1;
	while(t--){
		D=999;
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>g[i][j];
				ans[i][j]=-1;
			}
		}

		memset(vst,-1,sizeof(vst));
		dfs(0);			
		for(int i=0;i<n;i++)
			if(vst[i]==-1)				
					ans[0][i]=99;
		if(count(g[0],g[0]+n,0)==n)
			for(int i=0;i<n;i++)ans[0][i]=99;
		
		for(int i=0;i<n;i++){
			if(ans[0][i]==99)continue;
			memset(vst,-1,sizeof(vst));
			D=i;
			//vst[i]=1;
			dfs(0);
			for(int j=0;j<n;j++)
				if(vst[j]==-1 and j!=D and ans[0][j]!=99)
					ans[i][j]=1;
		}

		
		for(int i=0;i<n;i++)
			ans[i][i]=1;
		string s="+";
		for(int i=0;i<(2*n)-1;i++)
			s+="-";
		s+="+";
		cout<<"Case " << c++ << ":\n";
		for(int i=0;i<n;i++){
			cout << s << "\n";			
			cout<<'|';
			for(int j=0;j<n;j++){
				if(ans[0][j]==99)cout << "N";
				else if(ans[i][j]==1)cout << "Y";
				else cout << "N"; 
				cout<<'|';
			}
			cout << "\n";
		}
		cout << s << "\n";
	}
	return 0;
}
