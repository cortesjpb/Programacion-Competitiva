#include <bits/stdc++.h>
using namespace std;

int N, contador, men;
char s[26];
priority_queue<int,vector<int>,greater<int>> pq;

int main(){
	//freopen("entrada.txt","r",stdin);
	while(scanf("%d", &N), N){
		gets(s);
		for(int i=0;i<N;i++){
			contador=0;
			gets(s);
			for(int j=0;j<25;j++)if(s[j]==' ')contador++;
			pq.push(contador);
		}
		men=pq.top();pq.pop();
		contador=0;

		while(!pq.empty()){
			contador+=abs(men-pq.top());
			pq.pop();
		}
		printf("%d\n", contador);
	}
	
	return 0;
}
