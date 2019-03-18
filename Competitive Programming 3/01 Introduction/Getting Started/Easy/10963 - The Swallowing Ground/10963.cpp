#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)

int T,W;
int yu[250],yd[250];

int main(){
	
	
	cin>>T;
	while(T--){
		cin>>W;
		forn(i,W)
			cin>>yu[i]>>yd[i];		
		
		int val=abs(yu[0]-yd[0]);
		bool ans=true;
		forr(i,1,W){
			if(val!=abs(yu[i]-yd[i])){
				ans=false;
				break;
			}
		}		
		if(ans)cout<<"yes\n";
		else cout<<"no\n";
		if(T>0)cout<<"\n";
	}
	
	
	return 0;
}
