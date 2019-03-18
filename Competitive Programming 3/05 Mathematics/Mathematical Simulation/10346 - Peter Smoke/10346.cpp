#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int n,k;

int main(){	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	int ans;
	int resto;	
	while(scanf("%d %d",&n,&k)!=EOF){
		ans=n;
		resto=0;
		while((n/k)>0){	
			resto=n%k;
			ans+=(n/k);
			n=(n/k)+resto;
		}		
		cout << ans << "\n";
	}
	return 0;
}
