#include <bits/stdc++.h>
using namespace std;

int dp[7000000];
int f(int n){
	if(n==1)return 1;
	if(dp[n]!=-1)return dp[n];
	return dp[n]=1+f(n-f(f(n-1)));
}


int main(){
	long long a;
	while(cin>>a){
		memset(dp,-1,sizeof(dp));
		cout << f(a) << endl;
	}
	return 0;
}
