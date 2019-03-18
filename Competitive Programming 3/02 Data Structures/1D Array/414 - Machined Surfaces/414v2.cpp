#include <bits/stdc++.h>
using namespace std;

int N, v[14], contador;
char s[26];

int main(){
	//freopen("entrada.txt","r",stdin);
	while(scanf("%d", &N), N){
		gets(s);
		for(int i=0;i<N;i++){
			contador=0;
			gets(s);
			for(int j=0;j<25;j++)if(s[j]==' ')contador++;
			v[i]=contador;
		}
		sort(v,v+N);
		contador=0;
		for(int j=1;j<N;j++)contador+=abs(v[0]-v[j]);
		cout << contador << endl;
	}
	return 0;
}
