#include <bits/stdc++.h>
using namespace std;

string s,r;
long long N,a;

int main(){
	freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>N;
	while(N--){
		cin>>a;
		s=to_string(a),r="dsa";
		int ans=0;
		while(s!=r){
			ans++;
			r=s,reverse(r.begin(),r.end());
			a+=stoll(r);
			s=to_string(a);
			r=s,reverse(r.begin(),r.end());
		}
		cout << ans << " " << s << "\n";
	}
	return 0;
}
