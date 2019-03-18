#include <bits/stdc++.h>
using namespace std;

struct sol{
	int b,j;
};

int n;
sol v[1010];

int main(){
	
	int c=1;
	while(cin>>n){
		if(n==0)return 0;
		for(int i=0;i<n;i++){
			cin>>v[i].b;
			cin>>v[i].j;
		}
		sort(v,v+n,[](sol a,sol b){return a.j>b.j;});
		int tb=v[0].b,tj=;
		for(int i=0;i<n;i++){
			ans+=
		}
		
	}
	
	
	
	return 0;
}
