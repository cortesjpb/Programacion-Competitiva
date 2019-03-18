#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
typedef long long ll;

int n,v[100010];
vector<string> vs(100010),vrs(100010);
ll dp[100010][3];

/*ll f(int i, int re){
	if(i>n)return 0;
	if(dp[i][re]!=-1)return dp[i][re];
	ll ans=10e9;
	string ant= (re)?vrs[i-1]:vs[i-1];
	if(vs[i]>=ant && vrs[i]>=ant){
		ans=min(ans,f(i+1,0));
		ans=min(ans,v[i]+f(i+1,1));
	if(vs[i]>=ant)ans=min(ans,f(i+1,0));
	if(vrs[i]>=ant)ans=min(ans,v[i]+f(i+1,1));
	return dp[i][re]=ans;
}*/

ll f(int i, int re){
	if(i<=0)return 0;
	if(dp[i][re]!=-1)return dp[i][re];
	ll ans=10e9;
	//string act= (re)?vrs[i]:vs[i];
	string ant= (re)?vrs[i-1]:vs[i-1];
	if(act>=vs[i-1] || act>=vrs[i-1]){
		ans=min(ans,(v[i]*re)+f(i-1,0));
		ans=min(ans,(v[i]*re)+f(i-1,1));
	}
	return dp[i][re]=ans;
}



int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;	
	forn(i,n)cin>>v[i];
	forn(i,n){
		cin>>vs[i];
		vrs[i]=vs[i];
		reverse(vrs[i].begin(),vrs[i].end());
	}	
	forr(i,1,n){
		if(vs[i]<vs[i-1] && vrs[i]<vs[i-1] && vs[i]<vrs[i-1] && vrs[i]<vrs[i-1]){
			cout << -1;return 0;
		}
	}
	memset(dp,-1,sizeof(dp));
	ll answ=10e9;	
	answ=min(f(n,0),f(n,1));
	cout << answ << "\n";
	return 0;
}
