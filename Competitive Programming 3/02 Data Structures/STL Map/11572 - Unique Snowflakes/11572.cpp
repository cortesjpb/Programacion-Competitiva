#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

int t,n,a,v[1000100];
unordered_map<int,int> m;


int main(){
	freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		
		cin>>n;
		if(t==0)cout << n << " ----- " << endl;
		int cont=0,ans=-999;
		forn(i,n){
			cin>>v[i];
			if(m.find(v[i])==m.end()){m[v[i]]=0;cont++;}
			else{m.clear();ans=max(ans,cont);cont=1;m[v[i]]=0;}
		}
		ans=max(ans,cont);
		m.clear();
		cont=0;
		for(int i=n-1;i>=0;i--){
			if(m.find(v[i])==m.end()){m[v[i]]=0;cont++;}
			else{m.clear();ans=max(ans,cont);cont=1;m[v[i]]=0;}
		}
		ans=max(ans,cont);
		cout << ans << "\n";
		m.clear();
	}	
	return 0;
}
