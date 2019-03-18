#include <bits/stdc++.h>
using namespace std;

struct ele{
	int id,w,s;
};

ele v[1010];
int dp[1010];

int f(int i){
	int &r=dp[i];
	if(r!=-1)return r;
	r=1;
	for(int j=0;j<i;j++)
		if(v[j].w<v[i].w)
			r=max(r,dp[j]+1);
	return r;
}

void print(int i){
	int &r=dp[i];	
	for(int j=i;j>=0;j--)
		if(f(i)==f(j)+1){
			print(j);
			break;	
		}		
	cout << v[i].id <<"\n";
}

bool cmp(ele a,ele b){
	if(a.s>=b.s) return true;
	return false;
}

int main(){
	freopen("entrada.txt","r",stdin);
	int n=0;
	while(scanf("%d %d", &v[n].w,&v[n].s) == 2) {v[n].id=n+1;n++;};
	sort(v,v+n,cmp);
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)
		dp[i]=f(i);
	int maxi=*max_element(dp,dp+n);
	cout << maxi << "\n";
	/*for(int i=n-1;i>=0;i--){
		if(f(i)==maxi){
			print(i);
			break;
		}
	}*/
	print(max_element(dp,dp+n)-dp);
	return 0;
}
