#include <bits/stdc++.h>
using namespace std;

vector<string> song = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
vector<string> p(101);
int N;
int main(){
	cin >> N;
	for(int i=0;i<N;i++)
	    cin>>p[i];
	int v;
	(!N%16)?v=N/16:v=(N/16)+1;
	int w=0;
	for(int i=0; i<v;i++){
		for(int j=0;j<16;j++){
			cout<<p[w++]<<": "<<song[j]<<endl;
			if(w==N)w=0;
		}
	}
	return 0;
}
