#include <bits/stdc++.h>
using namespace std;

int v[10], ans,total;
string s, strans;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);	
	while(cin>>v[0]>>v[1]>>v[2]>>v[3]>>v[4]>>v[5]>>v[6]>>v[7]>>v[8]){
		ans=10e9;
		s="BCG";
		total=v[1]+v[2]+v[3]+v[6]+v[4]+v[8];
		if(total<ans){
			ans=total;
			strans=s;
		}
		s="BGC";
		total=v[1]+v[2]+v[3]+v[6]+v[5]+v[7];
		if(total<ans){
			ans=total;
			strans=s;
		}
		s="CBG";
		total=v[0]+v[1]+v[5]+v[8]+v[4]+v[6];
		if(total<ans){
			ans=total;
			strans=s;
		}
		s="CGB";
		total=v[0]+v[1]+v[5]+v[8]+v[3]+v[7];
		if(total<ans){
			ans=total;
			strans=s;
		}
		s="GBC";
		total=v[0]+v[2]+v[4]+v[7]+v[5]+v[6];
		if(total<ans){
			ans=total;
			strans=s;
		}
		s="GCB";
		total=v[0]+v[2]+v[4]+v[7]+v[3]+v[8];
		if(total<ans){
			ans=total;
			strans=s;
		}
		cout << strans << " " << ans << "\n";
	}
	return 0;
}
