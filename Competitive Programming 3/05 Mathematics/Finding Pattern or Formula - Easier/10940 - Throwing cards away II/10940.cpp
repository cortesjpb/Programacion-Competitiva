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

int n;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	while(cin>>n){
		if(n==0)return 0;
		if(n==1)cout << 1 << "\n";
		else if(n==2)cout << 2 << "\n";
		else{
			int lim=1;
			while(n>(2<<lim))lim++;		
			cout << (2<<lim)-(((2<<lim)-n)*2) << "\n";
		}
	}
	return 0;
}
