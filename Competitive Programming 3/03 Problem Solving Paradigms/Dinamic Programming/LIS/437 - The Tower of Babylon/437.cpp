#include <bits/stdc++.h>
using namespace std;

struct bloques{
	int a,b,c;
};

bool cmp(bloques a, bloques b){
	if(a.a!=b.a) return a.a<b.a;
	if(a.b!=b.b) return a.b<b.b;
	if(a.c!=b.c) return a.c>b.c;
}

bloques v[100];
int n,x,y,z,dp[100];

int main(){
	//freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int c=1;
	while(cin>>n){
		if(n==0) return 0;
		for(int i=0;i<n*3;i+=3){
			cin>>x>>y>>z;
			v[i]={min(x,y),max(x,y),z};
			v[i+1]={min(x,z),max(x,z),y};
			v[i+2]={min(z,y),max(z,y),x};
		}		
		sort(v,v+(n*3),cmp);
		for(int i=0;i<n*3;i++){
			dp[i]=v[i].c;
			for(int j=0;j<i;j++)
				if(v[j].a<v[i].a and v[j].b<v[i].b and dp[i]<dp[j]+v[i].c)
				    dp[i]=dp[j]+v[i].c;
		}
		cout<<"Case " << c++ << ": maximum height = "<< *max_element(dp,dp+(n*3))<<"\n";
	}
	return 0;
}
