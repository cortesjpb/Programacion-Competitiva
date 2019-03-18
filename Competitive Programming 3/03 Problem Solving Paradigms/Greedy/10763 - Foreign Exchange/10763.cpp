#include <bits/stdc++.h>
using namespace std;
int n,vf[500010],vt[500010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);	
	while(cin>>n){
		if(n==0) return 0;
		for(int i=0;i<n;i++){
			cin>>vf[i];
			cin>>vt[i];
		}
		if(n%2) {cout<<"NO\n";continue;}
		sort(vf,vf+n);		
		sort(vt,vt+n);
		bool ans=true;
		for(int i=0;i<n;i++)
			if(vf[i]!=vt[i]){
				ans=false;
				break;
			}
		if(ans)cout<<"YES\n";
		else cout<<"NO\n";
	}	
	return 0;
}
