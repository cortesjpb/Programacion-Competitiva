#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
typedef long long ll;

pair<int, int> vp[13];
int N,name;
ll dp[13][13];
int br[13][13];
string v;

ll f(int i, int j){
	if(i==j)return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	ll ans=10e9;
	forr(k,i,j){
		if(f(i,k)+f(k+1,j)+(vp[i].first*vp[k].second*vp[j].second)<ans){
			ans=f(i,k)+f(k+1,j)+(vp[i].first*vp[k].second*vp[j].second);
			br[i][j]=k;
		}
		//ans=min(ans,f(i,k)+f(k+1,j)+(vp[i].first*vp[k].second*vp[j].second));
	}
	return dp[i][j]=ans;
}

void bt(int i, int j){
	if(i==j){
		cout << (name+1);
		name++;
		return;
	}		
	cout << "(";
	forr(k,i,j){
		if(f(i,k)+f(k+1,j)+(vp[i].first*vp[k].second*vp[j].second)==f(i,j)){			
			bt(i,k);
			bt(k+1,j);
		}		
	}
	cout << ")";
}


int main(){
	//ios::sync_with_stdio(0);cin.tie(NULL);
	int c=1;
	while(cin>>N){
		if(N==0)return 0;
		forn(i,N){
			int a,b;
			cin>>a>>b;
			vp[i]={a,b};
		}
		name=0;
		memset(dp,-1,sizeof(dp));
	    f(0,N-1);
	    cout << "Case " << c++ << ": ";
		bt(0,N-1);cout<<"\n";		
	}
	
	return 0;
}

