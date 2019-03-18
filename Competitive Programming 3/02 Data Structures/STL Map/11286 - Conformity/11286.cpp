#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

map<string,int> m;
string s;
int n;


int main(){
	//freopen("entrada.txt","r",stdin);
	int v[5];
	while(cin>>n){
		if(n==0)return 0;
		int ans=-999,cont=0;
		forn(i,n){
			s="";
			cin>>v[0]>>v[1]>>v[2]>>v[3]>>v[4];
			sort(v,v+5);
			forn(j,5){s+=to_string(v[j]);s+=" ";}			
			m[s]++;
			cont=max(cont,m[s]);				
		}
		ans=0;
		for(auto a: m) if(cont==a.second)ans+=a.second;
		cout << ans << "\n";
			
		m.clear();
	}
	
	return 0;
}
