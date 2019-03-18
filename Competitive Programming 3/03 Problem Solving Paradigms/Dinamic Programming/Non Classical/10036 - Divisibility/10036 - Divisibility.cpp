#include <bits/stdc++.h>
using namespace std;
int m,n,k,v[10010];
int dp[110][10010];
int f(int x, int i){
	int &r=dp[abs(x)%k][i];
	if(r!=-1)return r;
	if(i==n){
		if(x%k==0)return 1;
		else return 0;
	}
	return r=(f(x+v[i],i+1) || f(x-v[i],i+1));
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	cin>>m;
	while(m--){
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>v[i];
		memset(dp,-1,sizeof(dp));
		if(f(0,0))cout << "Divisible\n";
		else cout << "Not divisible\n";
	}
	return 0;
}
