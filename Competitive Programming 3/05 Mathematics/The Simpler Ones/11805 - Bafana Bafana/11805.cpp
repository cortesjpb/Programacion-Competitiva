#include <bits/stdc++.h>
using namespace std;

int t, n, k, p, c, ans;

int main(){
	c=1;
	cin>>t;
	while(t--){
		cin>>n>>k>>p;
		((k+p)%n==0)?ans=n:ans=(k+p)%n;
		printf("Case %d: %d\n", c++, ans);
	}
	return 0;
}
