#include <bits/stdc++.h>
using namespace std;
int t, n, v[1100];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>v[i];
		int ans=0;
		for(int i=1;i<n;i++)
			for(int j=0;j<i;j++)
				if(v[j]<=v[i])
					ans++;
		cout << ans << "\n";
	}
	return 0;
}
