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

int n,m,a[15],b[15];
ii p[120];
float dr[110],sr[110];


int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
    
	while(cin>>n){
		if(n==0) return 0;
		cin>>m;
		forn(i,n)cin>>a[i];
		forn(i,m)cin>>b[i];
		int pos=0;
		forn(i,n){
			forn(j,m){
				dr[pos++]=a[i]*1.0/b[j];
			}
		}
		sort(dr,dr+(n*m),greater<float>());
		
		/*forn(i,n*m)cout << dr[i] << " ";
		cout << endl;*/
		
		forn(i,n*m-1){
			sr[i]=dr[i]/dr[i+1];
		}
		
		/*forn(i,n*m)cout << sr[i] << " ";
		cout << endl;*/
		
		sort(sr,sr+(n*m),greater<float>());
		cout << setprecision(2) << fixed << sr[0] << "\n";
	}
 
    return 0;
}

