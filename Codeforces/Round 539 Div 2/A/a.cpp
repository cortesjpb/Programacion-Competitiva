#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b);i++)
#define dfor(i,a,b) for(int i=(a);i>=(b);i--)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) dfor(i,n,0)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define neguno(v) memset(v, -1, sizeof(v))
#define pb push_back
#define fst first
#define snd second
#define dbg(v) cout << #v" = "<<v<<endl//;)
typedef long long ll;
typedef pair<int,int> ii;

int n,V;
int dp[110][110];

int f(int i, int v){
	if(i>n||v>V||v<1)return 99999999;
	if(i==n)return 0;
	if(dp[i][v]!=-1)return dp[i][v];
	int ans=999999999;	
	forn(j,V+1)ans=min(ans,(j*i)+f(i+1,j+v-1));		
	return dp[i][v]=ans;
}


int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n>>V;
	neguno(dp);
	int resp=99999999;
	forr(a,1,V+1){
		resp=min(resp,a+f(1,a));
	}	
	if(n==1 && V==1)cout << 1;
	else cout << resp-1 << "\n";
	return 0;
}
