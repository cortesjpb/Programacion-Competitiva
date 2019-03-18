#include <bits/stdc++.h>
using namespace std;

long long n, k;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("entrada.txt","r",stdin);
	cin>>n>>k;
	for(int i=0;i<k;i++){
		if(n%10==0) n/=10;
		else n--;		
	}
	cout << n;
	return 0;
}
