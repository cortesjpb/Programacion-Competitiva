#include <bits/stdc++.h>
using namespace std;

int v[10], T;
vector<string> s(10);

int main(){
	cin >> T;
	int c=1;
	while(T--){		
		printf("Case #%d:\n", c++);
		for(int i=0;i<10;i++){
			cin >> s[i];
			cin >> v[i];
		}
		int ans = *max_element(v,v+10);
		for(int i=0;i<10;i++){
			if(v[i]==ans)
			    cout << s[i]<<endl;
		}
	}
	return 0;
}
