#include <bits/stdc++.h>
using namespace std;

int n,p,q,v[35],t;

int main(){
	//freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>t;
	int c=1;
	while(t--){
		cin>>n>>p>>q;
		for(int i=0;i<n;i++)
			cin>>v[i];
		int ans=0,tw=0;
		for(int i=0;i<n and tw<=q and ans<=p;i++){
			if(tw+v[i]<=q and ans+1<=p){
				ans++;
				tw+=v[i];
			}
		}
		cout << "Case " << c++ << ": " << ans << "\n";		
	}
	return 0;
}
