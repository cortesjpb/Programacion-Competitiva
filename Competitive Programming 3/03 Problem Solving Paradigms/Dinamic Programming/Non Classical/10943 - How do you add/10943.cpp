#include <bits/stdc++.h>
using namespace std;

int n,k;
int dp[10010][110];
int f(int x,int l){
	int &r=dp[x][l];
	if(x>n||l>k)return 0;
	if(r!=-1)return r;
	int ans=0;
	if(l==k){
		if(x==n)return 1;
		else return 0;
	}
	for(int i=0;i<=n;i++)
		ans=(ans%1000000+f(x+i,l+1)%1000000);
	return r=ans;
}

int main(){
	//freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin>>n>>k){
		if(n==0 and k==0) return 0;
		memset(dp,-1,sizeof(dp));
		cout << f(0,0) << "\n";
	}
	return 0;
}
