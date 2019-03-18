#include <bits/stdc++.h>
using namespace std;

int t,n,v[20010];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>v[i];
		sort(v,v+n,greater<int>());
		long long ans=0;
		for(int i=2;i<n;i+=3)
			ans+=v[i];
		cout << ans << "\n";
	}	
	return 0;
}
