#include <bits/stdc++.h>
using namespace std;

int team[7];
int t, n, c;

int main(){
	cin>>t;
	c=1;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>team[i];
		sort(team,team+n);
		printf("Case %d: %d\n", c++, team[n/2]);
	}
	return 0;
}
