#include <bits/stdc++.h>
using namespace std;

int W,H,N, a, b, c, d, ans;
bool m[505][505];


int main(){
	//freopen("entrada.txt","r",stdin);
	while(cin>>W>>H>>N){
		memset(m,0,sizeof(m));
		if(W==0 and H==0 and N==0) return 0;
		while(N--){
			scanf("%d %d %d %d",&a,&b,&c,&d);
			for(int i=min(a,c);i<=max(a,c);i++){
				for(int j=min(b,d);j<=max(b,d);j++){
					if(m[i][j]==false){
						m[i][j]=true;
						//ans++;
					}
				}
			}
		}
		ans=0;
		for(int i=1;i<=W;i++){
			for(int j=1;j<=H;j++){
				if(m[i][j]==false) ans++;
			}
		}
		if(ans==0) printf("There is no empty spots.\n");
		else if(ans==1) printf("There is one empty spot.\n");
		else printf("There are %d empty spots.\n", ans);
	}
	return 0;
}

