#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

long long n,v[100100],cant[100100];
long long dp[100100];


long long f(int i){
	if(i==0)return 0;
	if(i==1) return cant[1];
	if(dp[i]!=-1)return dp[i];
	return dp[i]=max(cant[i]*i+f(i-2),f(i-1));
}


int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int a;
	cin>>n;
	int maxi=0;
	memset(dp,-1,sizeof(dp));
	forr(i,1,n+1){
		cin>>a;
		maxi=max(maxi,a);
		v[i]=a;
		cant[a]++;
	}	
	cout << f(maxi) << endl;
	
	return 0;
}
