#include <bits/stdc++.h>
using namespace std;

char cad[15];
long n, h, m, s, ta, ts, va, vs;
double distancia;

int main(){
	freopen("entrada.txt","r",stdin);
	distancia = 0.0;
	n=sscanf(cad,"%d:%d:%d %d", &h, &m, &s, &va);
	ta=h*3600+m*60+s;
	while(gets(cad)){
		n=sscanf(cad,"%d:%d:%d %d", &h, &m, &s, &vs);
		ts=(double)h*3600+m*60+s;
		distancia +=(double) (ts-ta)*va;
		if(n==3)printf("%s %.2f km\n", cad, distancia/3600.00);
		if(n==4) va=vs;
		ta=ts;		
	}
	return 0;
}
