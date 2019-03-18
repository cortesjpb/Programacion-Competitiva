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
			sz.assign(N,1);ns=N;rank.assign(N,0);p.assign(N,0);
			forn(i,N)p[i]=i;}
		int fs(int i){return (p[i]==i)?i:(p[i]=fs(p[i]));}
		bool iss(int i, int j){return fs(i)==fs(j);}
		void us(int i, int j){
			if(!iss(i,j)){
				ns--;int x=fs(i),y=fs(j);
				if(rank[x]>rank[y]){p[y]=x;sz[x]+=sz[y];}
				else{p[x]=y;sz[y]+=sz[x];if(rank[x]==rank[y])rank[y]++;}}}
		int nds(){return ns;}
		int sofs(int i){return sz[fs(i)];}
};


string su,sv;
map<string,int> m;
int n,t;

int main(){
	freopen("entrada.txt","r",stdin);
	freopen("salida.txt","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		cin>>n;
		uf sets(2*n+10);
		int ids=0;
		forn(i,n){
			cin>>su>>sv;
			if(m.find(su)==m.end()){m[su]=ids;ids++;}
			if(m.find(sv)==m.end()){m[sv]=ids;ids++;}
			sets.us(m[su],m[sv]);
			cout << sets.sofs(m[su]) << "\n";
			m.clear();
		}
	}
	return 0;
}
