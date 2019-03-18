#include <bits/stdc++.h>
using namespace std;

int n;

bool procesar(int a){
	int medio=pow(10,n/2.0);
	int pri=a/medio;
	int seg=a%medio;
	if(pow(pri+seg,2.0)==a)return true;
	else return false;
}

int main(){
	
	while(cin>>n){
		int lim=pow(10,(double)n)-1;
		cout << lim << endl;
		for(int i=0;i<lim;i++){
			if(procesar(i))
				cout << i << "\n";
		}
		
	}
	
	
	
	
	return 0;
}
