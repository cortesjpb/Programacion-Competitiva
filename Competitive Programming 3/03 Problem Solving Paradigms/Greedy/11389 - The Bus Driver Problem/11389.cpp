#include <bits/stdc++.h>
using namespace std;

int n,d,r,vm[110],va[110];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin>>n>>d>>r){
		if(n==0 and d==0 and r==0) return 0;
		for(int i=0;i<n;i++)
			cin>>vm[i];
		for(int i=0;i<n;i++)
			cin>>va[i];
		sort(vm,vm+n);
		sort(va,va+n,greater<int>());
		int ans=0;
		for(int i=0;i<n;i++)
			if(vm[i]+va[i]>d)
				ans+=vm[i]+va[i]-d;
		cout << ans*r << "\n";
	}
	return 0;
}
