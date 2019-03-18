#include <bits/stdc++.h>
using namespace std;

int T, K, total;
string t1="donate", t2="report";
string s;

int main() {
	cin >> T;
	total = 0;
	while(T--){
		cin >> s;
		if(s==t1){
			cin >> K;
			total+=K;
		} else
			cout << total << endl;
	}
	
	return 0;
}
