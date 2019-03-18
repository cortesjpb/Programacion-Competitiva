#include <bits/stdc++.h>
using namespace std;

int S, B, l, r;
bool res[]={false};
bool live[100005];



int main(){	
	freopen("entrada.txt","r",stdin);
	while(cin>>S>>B){	
		if(S==0 and B==0) return 0;	
		memset(live,0,sizeof(live));
		for(int i=0;i<B;i++){
			cin>>l>>r;
			fill(live+l,live+1+r,1);
			auto it=find_end(live+1,live+l,res,res+1);
			if(it!=live+l) cout << distance(live,it);
			else cout << '*';
			cout << " ";
			it=find(live+r,live+S+1,0);
			if(it!=live+S+1) cout << distance(live,it);
			else cout << '*';
			cout << endl;
		}
		cout << "-" << endl;
	}	
	return 0;
}
