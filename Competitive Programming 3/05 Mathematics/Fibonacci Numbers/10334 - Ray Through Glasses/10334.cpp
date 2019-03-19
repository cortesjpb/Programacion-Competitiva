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

int n,f[1010];

int main() {
    //std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	f[0]=0;f[1]=1;
	forr(i,2,1010)f[i]=f[i-1]+f[i-2];
	
	while(cin>>n)cout << f[n+2] << "\n";
	
    return 0;
}

