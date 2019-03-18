#include <bits/stdc++.h>
using namespace std;

int n, m, c;
int cons[52];
bool on[52];

int main(){
	freopen("entrada.txt","r",stdin);
	int C=1;
	while(scanf("%d %d %d",&n,&m,&c),n,m,c){
		memset(on,0,sizeof(on));
		for(int i=1;i<=n;i++)
		    cin>>cons[i];
		int ans=0,maxi=0,sw;		
		for(int i=0;i<m;i++){
			cin>>sw;
			if(!on[sw]) {ans+=cons[sw];on[sw]=1;}
			else {ans-=cons[sw];on[sw]=0;}
			maxi=max(maxi,ans);
		}
		if(C>1) printf("\n");
		printf("Sequence %d\n", C++);		
		if(maxi>c) printf("Fuse was blown.\n");		
		else printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n", maxi);
		
	}
	return 0;
}
