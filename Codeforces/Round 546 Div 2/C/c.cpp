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

int n,m;
ll a[510][510],b[510][510];

	
int main() {
    //std::ios_base::sync_with_stdio(false);
 
	cin>>n>>m;
	forn(i,n)forn(j,m)cin>>a[i][j];
	forn(i,n)forn(j,m)cin>>b[i][j];
	bool ans=true;
	forn(i,n){
		forn(j,m){
			if(a[i][j]!=b[i][j]){
				int x=i+1,y=j-1;
				bool esta=false;
				while(x<n && y>=0){
					if(a[x][y]==b[i][j]){
						ll aux=a[i][j];
						a[i][j]=a[x][y];
						a[x][y]=aux;
						esta=true;break;
					}
					x++;y--;
				}
				/*forn(u,n){
					forn(v,m)
						cout << a[u][v] <<  " ";
					cout << endl;
				}
				cout << endl << endl << endl << endl << endl ;*/
					
				ans=esta;
				if(ans==false)break;
			}
			if(ans==false)break;
		}
	}
	if(ans)cout<< "YES";
	else cout<<"NO";
    return 0;
}
