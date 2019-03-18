#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int n,t;
char g[110][110];
int dr[]{1,0,-1,0};
int dc[]={0,1,0,-1};

void floodfill(int r, int c, char c1, char c2){
	if(r<0||c<0||r>=n||c>=n)return;
	if(g[r][c]!=c1 and g[r][c]!=9)return;
	g[r][c]=c2;
	forn(d,4)
		floodfill(r+dr[d],c+dc[d],c1,c2);
	
}


int main(){
	//freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin>>t;
	int c=1;
	while(t--){
		cin>>n;
		forn(i,n)
			forn(j,n)
				cin>>g[i][j];
		int ans=0;
		forn(i,n)
			forn(j,n){
				if(g[i][j]=='x'){
					ans++;
					floodfill(i,j,'x','.');
				}
			}
		cout <<"Case "<< c++ <<": " << ans << "\n";
		
	}
	
	
	
	
	return 0;
}
