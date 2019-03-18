#include <bits/stdc++.h>
using namespace std;

struct val{
	int h,r;
};
int v[2],t;
val dp[10010];

val f(int x){
	//if(x<0)return 0;
	if(dp[x].h!=-1)return dp[x];
	int ans=0;
	for(int i=0;i<2;i++)
		if(x-v[i]>=0)
			ans=max(ans,1+f(x-v[i]).h);
	/*int ans=max(1+f(x-v[i],i),f(x,i-1));
	ans=max(ans,1+f(x-v[i],i));*/	
	return dp[x]={ans,x};
}

bool cmp(val a, val b){
	if(a.r!=b.r) return a.r<b.r;
	return a.h>b.h;
}

int main(){
	while(scanf("%d %d %d",&v[0],&v[1],&t)!=EOF){
		memset(dp,-1,sizeof(dp));
		sort(dp,dp+t,cmp);
		int a=find_if(dp,dp+t,[](val b){return (b.r!=-1 && b.h!=-1);})-dp;
		cout << dp[a].h << endl;
	}
	return 0;
}
