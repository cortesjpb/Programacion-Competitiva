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

int m,n;
int v[50010],sum[50010],acum[50000];



struct RMQ{
	#define LVL 16
	int vec[LVL][1<<(LVL+1)];
	int &operator[](int p){return vec[0][p];}
	int get(int i, int j) {//intervalo [i,j)
		int p = 31-__builtin_clz(j-i);
		return max(vec[p][i],vec[p][j-(1<<p)]);
	}
	void build(int n) {//O(nlogn)
		int mp = 31-__builtin_clz(n);
		forn(p, mp) forn(x, n-(1<<p))
			vec[p+1][x] = max(vec[p][x], vec[p][x+(1<<p)]);
}}rmq;



int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);	
	
	//cin>>n;
	scanf("%d",&n);
	forn(i,n)scanf("%d",&v[i]);
	
	int maxi=INT_MIN;
	int suma=v[0];
	sum[0]=acum[0]=v[0];
	forr(i,1,n){
		acum[i]=v[i]+acum[i-1];
	}
	forr(i,1,n){
		suma=max(v[i],suma+v[i]);
		maxi=max(maxi,suma);
		sum[i]=maxi;
	}
	
	forn(i,n)cout << acum[i] << " ";
	cout << endl;
	forn(i,n)cout << sum[i] << " ";
	cout << endl;
	
	forn(i,n)rmq[i]=sum[i];
	
	scanf("%d",&m);
	rmq.build(n);
	int a,b;
	while(m--){
		scanf("%d %d",&a,&b);
		if(a==b)cout << v[a-1] << "\n";
		else if (min(a,b)-1!=0)printf("%d\n",rmq.get(min(a,b)-1,max(a,b))-sum[min(a,b)-2]);
		else printf("%d\n",rmq.get(min(a,b)-1,max(a,b))-sum[min(a,b)-1]);
	}

	return 0;
}
