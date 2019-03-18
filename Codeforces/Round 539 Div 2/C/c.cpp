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

const int maxn = 3e5+10;
const int maxa = (2<<20)+10;

int n,v[maxn];
ll cont[3][maxa];

int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n;
	forn(i,n)cin>>v[i];
	ll ans=0;
	ll sum=0;
	cont[1][0]=1;
	forn(i,n){
		sum=sum^v[i];
		ans+=cont[i%2][sum];
		cont[i%2][sum]++;
	}	
	
	cout << ans << endl;
	


	return 0;
}

