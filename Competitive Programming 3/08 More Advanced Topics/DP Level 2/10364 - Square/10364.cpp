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

int N,M,total,target;
int l[21];
int dp[6][200010];

int f(int cantl, int bm, int sum){
	cout << cantl << " --- " << sum << endl;
	if(cantl>4 || bm>(1<<M))return 0;
	if(cantl==4 && bm==target && sum==total)return 1;
	if(dp[cantl][sum]!=-1) return dp[cantl][sum];
	if((cantl==4 && sum!=total) || (cantl==4 && bm!=target))return 0;
	//if(cantl>0)if(__builtin_popcount(bm)>((((M/4)*cantl)+1)))return 0;
	
	int b1=-1;
	int ans=-1;
	forn(i,M){
		if(!(bm & (1<<i))){
			b1=i;			
			if((sum+l[b1])%(total/4)==0)return dp[cantl][sum]=max(dp[cantl][sum],f(cantl+1,bm | (1<<b1),sum+l[b1]));
			else return dp[cantl][sum]=max(dp[cantl][sum],f(cantl,bm | (1<<b1),sum+l[b1]));
		}
	}
	//return dp[cantl][sum]=ans;
}


int main() {
    //std::ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	cin>>N;
	while(N--){
		memset(dp,-1,sizeof(dp));
		cin>>M;
		target=(1<<M)-1;
		total=0;		
		forn(i,M){cin>>l[i];total+=l[i];}		
		int answ=f(0,0,0);
		if(answ==1)cout<<"yes\n";
		else cout<<"no\n";
	}
    return 0;
}

