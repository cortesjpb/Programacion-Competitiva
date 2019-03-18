#include <bits/stdc++.h>
using namespace std;
int t,n;
string s;
int main(){	
	cin>>t;
	int c=1;
	while(t--){
		cin>>n>>s;
		int ans=0;
		for(int i=0;i<n;){
			if(s[i]=='.'){
				ans++;
				i+=3;
			}
			else i++;
		}
		printf("Case %d: %d\n",c++,ans);
	}	
	return 0;
}

