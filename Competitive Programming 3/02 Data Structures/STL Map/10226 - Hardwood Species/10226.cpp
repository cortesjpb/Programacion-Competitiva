#include <bits/stdc++.h>
using namespace std;

int t;
string s;
map<string,int> m;


int main(){
	//freopen("entrada.txt","r",stdin);	
	cin>>t;
	cin.ignore();
	cin.ignore();
	while(t--){	
		int cont=0;
		while(getline(cin,s)){
			if(s=="")break;
			m[s]++;
			cont++;
		}
		for(auto a: m){
			cout << a.first;
			printf(" %.4f\n",(a.second*100.0)/cont);
		}		
		if(t)cout << "\n";
		m.clear();
	}
	return 0;
}
