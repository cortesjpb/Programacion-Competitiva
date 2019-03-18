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

int k,m;
int cr[110][3];
int t[110][110];
set<int> s;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	while(cin>>k){
		if(k==0)return 0;
		cin>>m;
		bool ans=true;
		s.clear();
		forn(i,k){
			int a;
			cin>>a;
			s.insert(a);
		}
		forn(i,m){
			cin>>cr[i][0]>>cr[i][1];
			forn(j,cr[i][0]){
				cin>>t[i][j];
			}
		}
		
		int cont;
		forn(i,m){
			cont=0;			
			forn(j,cr[i][0]){
				if(cont>=cr[i][1])break;
				if(s.count(t[i][j]))cont++;
			}
			if(cont<cr[i][1]){
				ans=false;
				break;
			}
		}
		if(ans)cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}
