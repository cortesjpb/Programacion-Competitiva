#include <iostream>
#include <cstdio>
using namespace std;

int m, d, ms;
double cuota, inicial, deuda, pa, p, ps[102];

int main(){
	//freopen("entrada.txt", "r", stdin);	
	while(cin >> m){
		if(m<0) return 0;
		cin >> inicial >> deuda >> d;
		pa = inicial+deuda;
		cuota = deuda/m;		
		while(d--){
			cin >> m >> p;
			for (int i = m; i < 102; i++)
			    ps[i] = p;
		}		
		pa-=pa*ps[0];
		if(deuda<pa){
			cout << "0 months" << endl;
			continue;
		}
		int i;
		for(i = 1; i<102;i++){
			pa-=pa*ps[i];
			deuda-=cuota;
			if(deuda<pa) break;
		}		
		cout << i;
		(i!=1)?cout<<" months\n":cout<<" month\n";
	}
	return 0;
}
