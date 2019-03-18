#include <bits/stdc++.h>
using namespace std;

int T, N, v, m, j;

int main(){
	cin >> T;
	int c=1;
	while(T--){
		m = j = 0;
		cin>>N;
		while(N--){
			cin>> v;
			(!v%30)? m+=v/30 : m+=(v/30)+1;
			(!v%60)? j+=v/60 : j+=(v/60)+1;
		}
		m*=10;
		j*=15;
		printf("Case %d: ", c++);
		(m<j)?printf("Mile %d\n", m):(m>j)?printf("Juice %d\n", j):printf("Mile Juice %d\n", m);
	}	
	return 0;
}
