#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int t,n;
map<int, int> m;

int main(){	
	cin>>t;
	while(t--){
		cin>>n;
		int aux;
		int digit;
		forr(i,1,n+1){
			aux=i;
			while(aux/10>0){
				digit=aux%10;
				m[digit]++;
				aux/=10;
			}
			m[aux]++;
		}
		cout << m[0];
		forr(i,1,10)
			cout << " " << m[i];
		cout << "\n";
		m.clear();
	}
	return 0;
}
