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
typedef long long ll;
typedef pair<int,int> ii;
const int maxn = 100010;


int N;
int dp[1<<13];
string s;

int f(int bm){
	if(dp[bm]!=-1)return dp[bm];
	int ans1=-1e9,ans2=-1e9;
	bool mov=false;
	forr(i,2,12){
		if((bm & (1<<i)) && (bm & (1<<(i-1))) && (bm & (1<<(i-2)))==0){	
			int bm2=bm;
			bm2&=~(1<<i);
			bm2&=~(1<<(i-1));
			bm2|=(1<<(i-2));
			mov=true;			
			ans1=max(ans1,1+f(bm2)); 
		}
	}
	forn(i,9){
		if((bm & (1<<i)) && (bm & (1<<(i+1))) && (bm & (1<<(i+2)))==0){	
			int bm2=bm;
			bm2&=~(1<<i);
			bm2&=~(1<<(i+1));
			bm2|=(1<<(i+2));
			mov=true;			
			ans2=max(ans2,1+f(bm2)); 
		}
	}
	int ans=max(ans1,ans2);
	if(mov)return dp[bm]=ans;
	else return 0;
}
	
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	
    cin>>N;
    memset(dp,-1,sizeof(dp));
    while(N--){
		cin>>s;
		int inic=0;
		int tot=0;		
		forn(i,12){
			if(s[i]=='o'){
				inic|=(1<<i);
				tot++;
			}
		}
		cout << tot-f(inic) << "\n";
	}
	
    return 0;
}

