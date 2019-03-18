#include <bits/stdc++.h>
using namespace std;

int L, W, H, T;

int main() {
	cin >> T;
	int c = 1;
	while(T--){
		cin >> L >> W  >> H;
		if(L>20 or W>20 or H>20)
		    cout << "Case " << c++ << ": bad"<<endl;
		else
		    cout << "Case " << c++ << ": good"<<endl;
	}
	return 0;
}
