#include <bits/stdc++.h>
using namespace std;

bool on[3005];
int n, anterior, siguiente;


int main(){
	while(cin>>n){
		int N=n;
		memset(on,0,sizeof(on));
		cin>>anterior;
		if(n==1) {cout << "Jolly" << endl;continue;}
		n--;
		while(n--){
			cin>>siguiente;
			on[abs(anterior-siguiente)]=true;
			anterior=siguiente;
		}
		if(all_of(on+1,on+N,[](bool a){return a;}))
		    cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;
	}	
	return 0;
}
