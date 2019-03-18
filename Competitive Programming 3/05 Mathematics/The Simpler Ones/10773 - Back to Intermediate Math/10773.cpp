#include <bits/stdc++.h>
using namespace std;

int t,c;
float d,v,u,t1,t2;

int main(){
	cin>>t;
	c=1;
	while(t--){
		cin>>d>>v>>u;
		if(v>=u||u==0||v==0){
		    printf("Case %d: can't determine\n", c++);
		    continue;
		}
		t1=d/u;
		t2=d/sqrt(u*u-v*v);
		printf("Case %d: %.3f\n",c++, abs(t1-t2));
	}
	return 0;
}
