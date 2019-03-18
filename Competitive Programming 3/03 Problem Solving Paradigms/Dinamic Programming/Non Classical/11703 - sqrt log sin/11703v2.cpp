#include <bits/stdc++.h>
using namespace std;
int n, dp[];
int f(int x){
	if(dp[x]!=-1)return dp[x];
	if(x==0)return 1;
	return dp[x]=(f(x-sqrt(x))%1000000 + f(log(x))%1000000 + f(x*pow(sin(x),2.0))%1000000)%1000000;
}
int main(){
	/*ios::sync_with_stdio(0);
	cin.tie(NULL);*/
	/*freopen("salida.txt","r",stdin);
	freopen("salida2.txt","w",stdout);*/
	memset(dp,-1,sizeof(dp));
	while(scanf("%d",&n)){
		if(n==-1)return 0;
		printf("%d\n",dp[n]);
	}
	return 0;
}
