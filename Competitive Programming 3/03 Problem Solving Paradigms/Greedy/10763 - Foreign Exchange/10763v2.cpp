#include <bits/stdc++.h>
using namespace std;
int n, x, y;
set<int>a, b;
int main(){
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(NULL);	
	while(cin>>n){
		if(n==0) return 0;		
		a.clear();b.clear();
		for(int i=0;i<n;i++){
			cin>>x>>y;
			a.emplace(x);
			b.emplace(y);
		}
		if(n%2) {cout<<"NO\n";continue;}
		if(a==b) cout << "YES\n";
		else cout<<"NO\n";
	}	
	return 0;
}
