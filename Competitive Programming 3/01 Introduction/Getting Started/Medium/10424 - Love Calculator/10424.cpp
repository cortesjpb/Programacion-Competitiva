#include <bits/stdc++.h>
using namespace std;

char s1[30], s2[30];
int v1, v2;
string s;

int puntuar(char s[30]){
	int v=0;
	for(int i=0;s[i]!='\0';i++){
			if(s[i]>='A' and s[i]<='Z')
			    v+= s[i]-'A'+1;
			else if(s[i]>='a' and s[i]<='z')
			    v+= s[i]-'a'+1;
			else continue;
	}
	return v;
}

int reducir(int v){
	while(v>=10)
	    v = (v/100)+((v%100)/10)+((v%100)%10);
	return v;
}

int main(){
	//freopen("entrada.txt","r",stdin);
	while(*gets(s1)!=EOF){
		gets(s2);
		v1 = puntuar(s1);
		v1 = reducir(v1);
		v2 = puntuar(s2);
		v2 = reducir(v2);
		float ans = (v1>=v2)?(float)(v2*100)/v1:(float)(v1*100)/v2;
		printf("%.2f %%\n", ans);
	}
	return 0;
}

