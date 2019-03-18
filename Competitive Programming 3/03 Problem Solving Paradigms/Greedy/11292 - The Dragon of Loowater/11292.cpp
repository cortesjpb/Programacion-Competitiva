#include <bits/stdc++.h>
using namespace std;
int n,m,vc[20010],vk[20010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin>>n>>m){
		if(n==0 and m==0)return 0;
		for(int i=0;i<n;i++) cin>>vc[i];
		for(int i=0;i<m;i++) cin>>vk[i];
		if(n>m){cout<<"Loowater is doomed!\n";continue;}
		sort(vc,vc+n);
		sort(vk,vk+m);
		int ans=0;
		int j=0;
		for(int i=0;i<m and j<n;i++)
			if(vk[i]>=vc[j]){
				j++;
				ans+=vk[i];
			}	
		if(j==n)cout << ans << "\n";
		else cout << "Loowater is doomed!\n";
	}	
	return 0;
}
