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
const int MAXN = 1000010;

int n;

int sv[MAXN];
void sieve(){
	memset(sv,-1,sizeof(sv));
	forr(i,2,MAXN)if(sv[i]<0)for(ll j=1LL*i*i;j<MAXN;j+=i)sv[j]=i;
}

int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	sieve();
	while(cin>>n){
		if(n==0)break;
		int a=-1,b=-1;
		dforn(i,n-3)if(sv[i]<0){
			if(a>0)break;
			forr(j,3,n)if(i+j==n && sv[j]<0){a=j,b=i;break;}			
		}		
		
		if(a!=-1)cout<<n<<" = "<<a<< " + "<<b<<"\n";
		else cout<<"Goldbach's conjecture is wrong.\n";
	}
    return 0;
}

