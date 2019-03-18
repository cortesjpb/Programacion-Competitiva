#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
typedef vector<int> vi;


struct uf{
	private:
		vi p,rank,sz;
		int ns;
	public:
		uf(int N){
			sz.assign(N,1);p.assign(N,0);rank.assign(N,0);ns=N;
			forn(i,N)p[i]=i;}
		int fs(int i){return (p[i]==i)?i:(p[i]=fs(p[i]));}
		bool iss(int i, int j){return fs(i)==fs(j);}
		void us(int i, int j){
			if(!iss(i,j)){
				ns--;int x=fs(i),y=fs(j);
				if(rank[x]>rank[y]){p[y]=x;sz[x]+=sz[y];}
				else{p[x]=y;sz[y]+=sz[x];if(rank[x]==rank[y])rank[y]++;}}}
		int nss(){return ns;}
		int sofs(int i){return sz[fs(i)];}
};

int n,m,ans;
string fs,s;


int main(){
	
	cin>>n>>m;
	uf sets(30);
	ans=0;
	cin>>fs;
	forn(i,m){
		cin>>s;
		sets.us(s[0]-'A',s[1]-'A');
		if(sets.fs(fs[0]-'A')==sets.fs(fs[1]-'A') &&
		 sets.fs(fs[1]-'A')==sets.fs(fs[2]-'A'))ans++;
		
	}
	
	
	return 0;
}
