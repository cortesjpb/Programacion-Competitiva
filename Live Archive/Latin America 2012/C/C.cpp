#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int N,ks,sc,ans,pks;
vector<string> vs(100010);

struct trie{
	map<char, trie> m;
	void add(const string &s, int p=0){
		if(s[p]) {m[s[p]].add(s, p+1);cont++;}
		else cont++;
	}
	int cont=0;
	void dfs(const string &s, int sc){
		if(m.count(s[sc])){
			if(m[s[sc]].cont==pks)m[s[sc]].dfs(s,sc+1);
			else {ks++;pks=m[s[sc]].cont;m[s[sc]].dfs(s,sc+1);}
		}
	}
};



int main(){
	cin.tie(NULL);
	while(cin>>N){
		trie tri;
		forn(i,N){
			cin>>vs[i];
			tri.add(vs[i],0);
		}
		ans=0;
		forn(i,N){
			sc=0;
			pks=0;
			ks=0;
			tri.dfs(vs[i],0);			
			ans+=ks;
		}		
		printf("%.2f\n",(double)(ans/(N*1.0)));
	}
	
	return 0; 
}
