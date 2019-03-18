#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define MOD 1000007
int T, N;
char g[110][110];
int dp[110][110];

int f(int i,int j){
	if(i==0 && g[i][j]=='.')return 1;
	if(dp[i][j]!=-1)return dp[i][j];
	int ans=0;
	if(i-1>=0 && j+1<N){
		if(g[i-1][j+1]=='.')ans = (ans + f(i-1,j+1)) % MOD;
		else if(i-2>=0 && j+2<N){
			if(g[i-1][j+1]=='B'&& g[i-2][j+2]=='.')
				ans = (ans + f(i-2,j+2)) % MOD;
		}
	}
	if(i-1>=0 && j-1>=0){
		if(g[i-1][j-1]=='.')ans = (ans + f(i-1,j-1)) % MOD;
		else if(i-2>=0 && j-2>=0){
			if(g[i-1][j-1]=='B'&& g[i-2][j-2]=='.')
				ans = (ans + f(i-2,j-2)) % MOD;
		}
	}
	return dp[i][j]=ans;
}
string s;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	//freopen("entrada.txt","r",stdin);
	
	int c=1;
	cin>>T;
	while(T--){
		
		cin>>N;
		forn(i,N){
			cin>>s;
			forn(j,N)g[i][j]=s[j];
		}
		memset(dp,-1,sizeof(dp));
		forn(i,N)
			forn(j,N)
				if(g[i][j]=='W'){
					dp[i][j]=f(i,j);
					cout << "Case " << c++ << ": " << dp[i][j] <<"\n";
					break;
				}
	}
	return 0;
}
