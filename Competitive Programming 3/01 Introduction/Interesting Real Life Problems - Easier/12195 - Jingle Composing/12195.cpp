#include <bits/stdc++.h>
using namespace std;

string s;
map<char,int> m;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	m['W']=1;
	m['H']=2;
	m['Q']=4;
	m['E']=8;
	m['S']=16;
	m['T']=32;
	m['X']=64;
	
	int acum,ans;
	
	while(cin>>s){
		ans=0,acum=0;
		if(s=="*")return 0;
		for(auto c: s){
			if(c=='/'){
				if(acum==64)ans++;
				acum=0;
				continue;
			}
			acum+=(64/m[c]);
		}
		
		cout << ans << "\n";
	}
	
	return 0;
}
