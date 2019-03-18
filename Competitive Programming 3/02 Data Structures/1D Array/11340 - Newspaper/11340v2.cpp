#include <bits/stdc++.h>
using namespace std;

int N, K, M,v;
unsigned long long total;
char c;
string s;

map<char, int>m;

int main(){
	//freopen("entrada.txt","r",stdin);
	cin>>N;
	while(N--){
		cin>>K;
		while(K--){
			cin>>c>>v;
			m[c]=v;
		}
		total=0;
		cin>>M;
		getline(cin,s);
		while(M--){
			getline(cin,s);
			for(int i=0;i<s.length();i++){
				auto it=m.find(s[i]);
				if(it!=m.end())
				    total+=m[s[i]];
			}
		}
		double ans=(double)total/100.0;
		printf("%.2f$\n",ans);
		m.clear();
	}
	
	return 0;
}
