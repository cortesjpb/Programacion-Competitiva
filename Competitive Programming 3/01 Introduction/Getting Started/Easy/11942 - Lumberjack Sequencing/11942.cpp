#include <bits/stdc++.h>
using namespace std;

int N, v[10];
bool o;

int main(){
	cout << "Lumberjacks:\n";
	cin>>N;
    while(N--){
		o=true;
		for(int i=0;i<10;i++)
			cin>>v[i];
	    if(v[0]>v[1]){
			for(int i=0;i<10-1;i++)
				if(v[i]<v[i+1])
				    o=false;
		} else {
			for(int i=0;i<10-1;i++)
				if(v[i]>v[i+1])
				    o=false;
		}
		(o) ? cout << "Ordered\n" : cout << "Unordered\n";
	}	
}
