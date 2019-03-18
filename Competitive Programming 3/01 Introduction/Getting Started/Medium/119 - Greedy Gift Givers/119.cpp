#include <bits/stdc++.h>
using namespace std;

map<string, int> m;
int v, N, g, f;
vector<string> name(11);
string s;

int main(){
	//freopen("entrada.txt","r",stdin);
	int c=1;
	while(scanf("%d",&N)!=EOF){
		if(c>1) cout << endl;
		m.clear();
		for(int i=0;i<N;i++){
			cin>>name[i];
			m.insert({name[i],0});
		}
		for(int i=0;i<N;i++){
			cin >> s >> g >> f;
			if (f==0)continue;
			m[s]=m[s]-g+(g%f);
			for(int i=0; i<f;i++){
				cin >> s;
				m[s]+=g/f;
			}
		}
		
		for(int i=0;i<N;i++)
		    cout << name[i] << " " << m[name[i]] <<endl;
		c++;
	}
	
	return 0;
}
