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
#define INF 1e9
#define l left
#define r right
typedef long long ll;
typedef pair<int,int> ii;
const int maxn = 100010;

struct gr{
	int a,b,c;
};
int score[10][10][10];
int dp[1<<9];
int N,A,B,C,S,targ;
gr comb[85];
	


int f(int bm){
	if(dp[bm]!=-1)return dp[bm];	
	if(bm==targ)return 0;
	
	int ans=-1e9;	
	forn(i,N){
		if((bm & (1<<comb[i].a))==0 && (bm & (1<<comb[i].b))==0
		 && (bm & (1<<comb[i].c))==0){
			 //cout << comb[i].a << " " << comb[i].b << " " << comb[i].c << "\n";
			ans=max(ans,score[comb[i].a][comb[i].b][comb[i].c]
			+ f(bm | (1<<comb[i].a) | (1<<comb[i].b) | (1<<comb[i].c)));			
		}
	}
	return dp[bm]=ans;
}	
	
	
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	targ=(1<<9)-1;	
	int caso=1;
	while(cin>>N){
		if(N==0)return 0;
		memset(dp,-1,sizeof(dp));		
		forn(i,N){
			cin>>A>>B>>C>>S;
			A-=1,B-=1,C-=1;
			comb[i]={A,B,C};
			score[A][B][C]=S;
		}
		int answ=f(0);
		if(answ<=-1)cout<<"Case " << caso++ << ": -1\n";
		else cout<<"Case " << caso++ << ": " << answ << "\n";
	}
    return 0;
}

