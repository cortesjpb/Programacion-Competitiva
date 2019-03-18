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
int v[50010],dp[50010];



struct RMQ{
	#define LVL 17
	int vec[LVL][1<<(LVL+1)];
	int &operator[](int p){return vec[0][p];}
	int get(int i, int j) {//intervalo [i,j)
		int p = 31-__builtin_clz(j-i);
		return min(vec[p][i],vec[p][j-(1<<p)]);
	}
	void build(int n) {//O(nlogn)
		int mp = 31-__builtin_clz(n);
		forn(p, mp) forn(x, n-(1<<p))
			vec[p+1][x] = min(vec[p][x], vec[p][x+(1<<p)]);
}}rmq;



int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);	
	
	//cin>>n;
	scanf("%d",&n);
	forn(i,n)scanf("%d",&rmq[i]);
	scanf("%d",&m);
	rmq.build(n);
	int a,b;
	while(m--){
		scanf("%d %d",&a,&b);
		printf("%d\n",rmq.get(min(a,b),max(a,b)+1));
	}

	return 0;
}
