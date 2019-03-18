#include <bits/stdc++.h>
using namespace std;

int B, N, D, C, r, R[21];

int main(){
	//freopen("entrada.txt","r",stdin);
	while(cin >> B >> N){
		if(B==0 and N==0) return 0;
		for(int i=1; i<=B;i++)
			cin>>R[i];
		for(int i=0;i<N;i++){
			cin>>D>>C>>r;
			R[C]+=r;
			R[D]-=r;
		}
		if(all_of(R+1,R+B+1,[](int i){return i>=0;}))
		    cout << "S" << endl;
		else
		    cout << "N" << endl;
	}
	return 0;
}
