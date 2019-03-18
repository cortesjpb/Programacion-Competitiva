#include <bits/stdc++.h>
using namespace std;

int S, B, l, r;
int LS[100005];
int RS[100005];



int main(){	
	//freopen("entrada.txt","r",stdin);
	while(cin>>S>>B){	
		if(S==0 and B==0) return 0;	
        for(int i=1;i<=S;i++){
			LS[i]=i-1;
			RS[i]=i+1;
		}

		for(int i=0;i<B;i++){
			cin>>l>>r;
			if(LS[l]!=0)cout << LS[l];
			else cout << '*';
			cout << " ";
			if(RS[r]!=S+1)cout << RS[r];
			else cout << '*';
			cout << '\n';
			LS[RS[r]]=LS[l];
			RS[LS[l]]=RS[r];
		}
		cout << "-" << endl;
	}	
	return 0;
}
