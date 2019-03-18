#include <bits/stdc++.h>
using namespace std;

long long v[10005];
long long x;

int main(){	
	for(int i=1;(cin>>x);i++){		
		v[i]=x;
		sort(v+1,v+i+1);
		if(i==1) cout << v[i] << endl;
		else if(i%2!=0) cout << v[(i/2)+1] << endl;
		else cout << ((v[i/2]+v[(i/2)+1])/2) << endl;
	}
	return 0;
}
