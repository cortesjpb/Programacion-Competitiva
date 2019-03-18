#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b);i++)
#define dfor(i,a,b) for(int i=(a);i>=(b);i--)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) dfor(i,n,0)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fst first
#define snd second
#define dbg(v) cout << #v" = "<<v<<endl//;)
typedef long long ll;
typedef pair<int,int> ii;
const int maxn = 100010;

struct nodo{
	int maximo,minimo;
};

typedef nodo Elem;//Elem de los elementos del arreglo
typedef nodo Alt;//Elem de la alteracion
#define operacion(x,y) max(x,y)
const Elem neutro={0,0};
const Alt neutro2={0,0};
#define MAXN 100010
struct RMQ{
	int sz;
	Elem t[4*MAXN];
	Alt dirty[4*MAXN];//las alteraciones pueden ser de distinto Elem
	Elem &operator[](int p){return t[sz+p];}
	void init(int n){//O(nlgn)
		sz = 1 << (32-__builtin_clz(n));
		forn(i, 2*sz) t[i].maximo=t[i].minimo=neutro.minimo;
		forn(i, 2*sz) dirty[i].maximo=dirty[i].minimo=neutro2.minimo;
	}
	void push(int n, int a, int b){//propaga el dirty a sus hijos
		if(dirty[n].maximo!=0){
			nmaximo=max(t[n].maximo*dirty[n],t[n].minimo*dirty[n])
			nmaximo=max(t[n].maximo*dirty[n],t[n].minimo*dirty[n])
			t[n].maximo=nmaximo;
			t[n].minimo=nminimo;
			//t[n]+=dirty[n]*(b-a);//altera el nodo 
			if(n<sz){
				dirty[2*n].maximo+=dirty[n].maximo;
				dirty[2*n+1].maximo+=dirty[n];
				dirty[2*n].minimo+=dirty[n].minimo;
				dirty[2*n+1].minimo+=dirty[n].minimo;
			}
			dirty[n]=0;
		}
	}
	Elem get(int i, int j, int n, int a, int b){//O(lgn)
		if(j<=a || i>=b) return neutro;
		push(n, a, b);//corrige el valor antes de usarlo
		if(i<=a && b<=j) return t[n];
		int c=(a+b)/2;
		return operacion(get(i, j, 2*n, a, c), get(i, j, 2*n+1, c, b));
	}
	Elem get(int i, int j){return get(i,j,1,0,sz);}
	//altera los valores en [i, j) con una alteracion de val
	void alterar(Alt val, int i, int j, int n, int a, int b){//O(lgn)
		push(n, a, b);
		if(j<=a || i>=b) return;
		if(i<=a && b<=j){
			dirty[n].maximo+=val;
			push(n, a, b);
			return;
		}
		int c=(a+b)/2;
		alterar(val, i, j, 2*n, a, c), alterar(val, i, j, 2*n+1, c, b);
		t[n]=operacion(t[2*n], t[2*n+1]);//por esto es el push de arriba
	}
	void alterar(Alt val, int i, int j){alterar(val,i,j,1,0,sz);}
}rmq;

int N,M,A[maxn],B[maxn];
pair<int,ii> pi[maxn];


	
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	cin>>N>>M;
	forr(i,1,N+1)cin>>A[i];
	forr(i,1,N+1)cin>>B[i];
	rmq.init(N+1);
	int t,x,y,k;
	int orden=0;
	while(M--){
		cin>>t;
		if(t==1){
			orden++;
			cin>>x>>y>>k;
			pi[orden]={x,{y,k}};
			rmq.alterar(1,y,y+k+1);
			
		}else{
			cin>>x;
			int pos=rmq.get(x,x+1);
			//cout << pos << "---\n";
			//cout << pi[pos].fst << " " << pi[pos].snd.fst << " " << pi[pos].snd.snd << "---\n";
			if(pos){
				int cual=pi[pos].fst+(x-pi[pos].snd.fst);
				cout << A[cual] << "\n";
			}else{
				cout << B[x] << "\n";
			}
		}
	}
 
    return 0;
}

