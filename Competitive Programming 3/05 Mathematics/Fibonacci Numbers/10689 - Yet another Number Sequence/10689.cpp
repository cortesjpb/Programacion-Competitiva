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

int t,a,b,n,m;
int mod[]={0,10,100,1000,10000};
int per[]={0,60,300,1500,15000};
int f[15500];
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);	
	
	cin>>t;
	while(t--){
		cin>>a>>b>>n>>m;		
		int f[per[m]]={a%mod[m],b%mod[m]};
		forr(i,2,per[m])
			f[i]=(f[i-1]+f[i-2])%mod[m];
		cout << f[n%per[m]] << "\n";
	}
    return 0;
}

