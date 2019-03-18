#include <bits/stdc++.h>
using namespace std;

int r, n, t, c;

int main(){
	c=1;
	while(cin>>r>>n){
		if(r==0 and n==n) return 0;
		if(r<=n)
		    {printf("Case %d: 0\n", c++);continue;}
		t=r/n;t--;
		if(r%n)t++;
		if(t>26)
		    printf("Case %d: impossible\n", c++);
		else
		    printf("Case %d: %d\n", c++, t);
	}
	return 0;
}
