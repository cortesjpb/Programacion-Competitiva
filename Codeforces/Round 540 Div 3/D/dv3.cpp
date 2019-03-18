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

int n,m,v[110];
int parc[110];

int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);

	cin>>n>>m;
	int total=0;
	forn(i,n){cin>>v[i];total+=v[i];}
	if(total<m){cout<<-1;return 0;}
	sort(v,v+n,greater<int>());
	
	forr(i,1,n+1){
		int k=0;
		int acum=0;
		forn(j,n){
			acum+=max(0,v[j]-k);
			if((j+1)%i==0)k++;
		}
		if(acum>=m){			
			cout << i;
			return 0;
		}
	}	
	
	cout << -1;
	return 0;
}

