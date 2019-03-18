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

#define l fisrt
#define r second

int n,k;
ii p[110];
	
int main() {
    //std::ios_base::sync_with_stdio(false);
 
	cin>>n;
	int a,b;
	forn(i,n){
		cin>>a>>b;
		p[i]={a,b};
	}
	cin>>k;
	int ans=n;
	forn(i,n){
		if(k>p[i].second)ans--;
	}
	cout << ans;
 
    return 0;
}

