#include <bits/stdc++.h>
using namespace std;

int t,a,b,c,d,e[3],total;
char ans;

int main(){
	//freopen("entrada.txt","r",stdin);
	int caso=1;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d>>e[0]>>e[1]>>e[2];
		sort(e,e+3);
		total=a+b+c+d+((e[2]+e[1])/2);
		if(total>=90)ans='A';
		else if(total>=80)ans='B';
		else if(total>=70)ans='C';
		else if(total>=60)ans='D';
		else ans='F';
		printf("Case %d: %c\n",caso++,ans);
	}
	return 0;
}
