#include <bits/stdc++.h>
using namespace std;

int v[10010],t,dp[10010];
char s[1000];


/*int f(int i){
	int &r=dp[i];
	if(r!=-1)return r;
	r=1;
	for(int j=0;j<i;j++)
		if(v[j]<v[i])
			r=max(r,dp[j]+1);
	return r;
}*/

int f(int i){
	if(i==0)return 1;
	int ans=1;
	for(int j=0;j<i;j++)
		if(v[j]<v[i])
			ans=max(ans,f(j)+1);	
	return dp[i]=ans;	
}

void print(int i){
	int &r=dp[i];	
	for(int j=i;j>=0;j--)
		if(f(i)==f(j)+1){
			print(j);
			break;
		}
	cout << v[i] << "\n";
}

int main(){
	
	/*ios::sync_with_stdio(false);
	cin.tie(NULL);*/
	freopen("entrada.txt","r",stdin);	
	cin>>t;
	gets(s);
	gets(s);
	int c=1;
	while(t--){
		int n=0;
		while(gets(s)){
			if(strlen(s)==0)break;
			sscanf(s,"%d",&v[n++]);
		}
		memset(dp,-1,sizeof(dp));
		/*or(int i=0;i<n;i++)
			dp[i]=f(i);*/
		f(n-1);
		if(c++>1)cout <<"\n";
		cout << "Max hits: " << *max_element(dp,dp+n) << "\n";
		print(max_element(dp,dp+n)-dp);
	}
	return 0;
}
