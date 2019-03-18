#include <bits/stdc++.h>
using namespace std;

int N,M;
set<int> setn;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	int a;
	while(cin>>N>>M){
		if(N==0 && M==0)return 0;
		while(N--){
			cin>>a;
			setn.insert(a);
		}
		int ans=0;
		while(M--){
			cin>>a;
			if(setn.count(a))
				ans++;
		}		
		cout << ans <<"\n";
		setn.clear();
	}	
	return 0;
}
