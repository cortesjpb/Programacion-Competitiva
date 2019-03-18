#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int m,n;
char g[110][110];
int dr[]={1,1,0,-1,-1,-1,0,1};
int dc[]={0,1,1,1,0,-1,-1,-1};

void floodfill(int r, int c, char c1, char c2){
	if(r<0||r>=m||c<0||c>=n)return;
	if(g[r][c]!=c1) return;	
	g[r][c]=c2;
	forn(d,8)
		floodfill(r+dr[d],c+dc[d],c1,c2);	
}

int main(){
	//freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);
	cin.tie(NULL);	
	while(cin>>m){
		if(m==0)return 0;
		cin>>n;
		forn(i,m)
			forn(j,n)
				cin>>g[i][j];
			
		int ans=0;
		forn(i,m)
			forn(j,n){
				if(g[i][j]=='@'){
					floodfill(i,j,'@','.');
					ans++;
				}				
			}
		cout << ans << "\n";
	}
	return 0;
}
