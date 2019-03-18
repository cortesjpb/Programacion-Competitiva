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
typedef long long ll;
typedef pair<int,int> ii;
int T,c,d;

int main(){
	
	cin>>T;
	int caso=1;	
	while(T--){
		cin>>c>>d;			
		c*=100;
		d*=100;		
		int f=(9*c/5)+32;
		int ans=d+f;
		ans = (5*(ans-32)%9<5)?5*(ans-32)/9:(5*(ans-32)/9)+1;
		printf("Case %d: %.2f\n",caso++,ans/100.0);
	}
	
	return 0;
}

