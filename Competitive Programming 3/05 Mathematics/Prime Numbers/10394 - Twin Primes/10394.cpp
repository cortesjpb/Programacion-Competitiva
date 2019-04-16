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
const int MAXN = 20000010;

int n;
vector<ii> vi;

int sv[MAXN];
void sieve(){
	memset(sv,-1,sizeof(sv));
	forr(i,2,MAXN)if(sv[i]<0){
		for(ll j=1LL*i*i;j<MAXN;j+=i)sv[j]=i;
		if(sv[i]<0 && sv[i+2]<0)vi.pb({i,i+2});
	}
}

int main() {
    //std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	sieve();
	//forr(i,3,MAXN)if(sv[i]<0 && sv[i+2]<0)vi.pb({i,i+2});
	while(scanf("%d",&n)!=EOF)
		printf("(%d, %d)\n",vi[n-1].fst,vi[n-1].snd);
		//cout<<"("<<vi[n-1].fst<<", "<<vi[n-1].snd<<")\n";
    return 0;
}


