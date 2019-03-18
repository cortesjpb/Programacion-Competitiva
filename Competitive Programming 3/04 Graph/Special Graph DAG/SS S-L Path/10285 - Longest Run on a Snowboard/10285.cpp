#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int T,R,C,maxi;
int g[110][110], dp[110][110];
int dr[]={1,-1,0,0};
int dc[]={0,0,1,-1};
string s;

int f(int i, int j){
	if(i<0||i>=R||j<0||j>=C)return 0;
	if(dp[i][j]!=-1)return dp[i][j];	
	int ans=1;
	forn(k,4){
		if(g[i][j]>g[i+dr[k]][j+dc[k]])
			ans=max(ans,1+f(i+dr[k],j+dc[k]));
	}	
	return dp[i][j]=ans;
}

int main(){
	freopen("entrada.txt","r",stdin);
	
	cin>>T;
	while(T--){
		cin>>s>>R>>C;
		forn(i,R)
			forn(j,C)
				cin>>g[i][j];
		memset(dp,-1,sizeof(dp));	
		
		maxi=-1;
		forn(i,R){
			forn(j,C){
				if(dp[i][j]==-1)
					maxi=max(maxi,f(i,j));				
			}
		}
		cout << s << ": " << maxi << "\n";
	}
	return 0;
}
