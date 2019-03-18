#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

string s;
int m,dp[100100];

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>s;
	int n=s.length();
	dp[0]=0;
	forr(i,1,n)(s[i]==s[i-1])?dp[i]=dp[i-1]+1:dp[i]=dp[i-1];	
	cin>>m;
	int l,r;
	while(m--){
		cin>>l>>r;
		cout << dp[r-1]-dp[l-1] << "\n";
	}
	return 0;
}

