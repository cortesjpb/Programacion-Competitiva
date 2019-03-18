#include <bits/stdc++.h>
using namespace std;

string t1="Hajj", s;

int main(){
	int c = 1;
	while(cin >> s){
		if(s=="*") return 0;
		if(s==t1) cout << "Case " << c++ << ": Hajj-e-Akbar"<<endl;
		else cout << "Case " << c++ << ": Hajj-e-Asghar"<<endl;		
	}
	return 0;
}
