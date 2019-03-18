#include <bits/stdc++.h>
using namespace std;

int t,n;
int v[2005],lis[2005],lds[2005];

int fi(int i){
	int &r=lis[i];
	if(r!=-1)return r;
	r=1;
	for(int j=0;j<i;j++)
		if(v[j]<v[i])
			r=max(r,fi(j)+1);
	return r;
}

int fd(int i){
	int &r=lds[i];
	if(r!=-1)return r;
	r=1;
	for(int j=0;j<i;j++)
		if(v[j]>v[i])
			r=max(r,fd(j)+1);
	return r;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("entrada.txt","r",stdin);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>v[i];
		if(n==0){cout<<0<<"\n";continue;}
		else if(n==1){cout<<1<<"\n";continue;}
		reverse(v,v+n);
		memset(lis,-1,sizeof(lis));
		memset(lds,-1,sizeof(lds));
		for(int i=0;i<n;i++){
			fi(i);
			fd(i);
		}	
		int ans=-1;
		for(int i=0;i<n;i++)
			ans=max(ans,lis[i]+lds[i]-1);
		cout << ans << "\n";
	}	
	return 0;
}
