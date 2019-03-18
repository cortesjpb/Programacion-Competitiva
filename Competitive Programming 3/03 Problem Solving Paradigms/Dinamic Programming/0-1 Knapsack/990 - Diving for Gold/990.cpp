#include <bits/stdc++.h>
using namespace std;

int D[35], V[35];
int dp[35][1100];
int t, W, n;
bool item[35];


int value(int i, int x) {
	if(x==0 || i==n) return 0;
	if(dp[i][x]!=-1) return dp[i][x];
	if(D[i]>x) return dp[i][x]=value(i+1,x);
	return dp[i][x]=max(value(i+1,x), V[i]+value(i+1,x-D[i]));
}

void print(int i, int x) {
	if (x<0||i==n) return;
	if(V[i]+value(i+1,x-D[i])==dp[i][x]){
		item[i]=true;
		print(i+1,x-D[i]);
	} else {
		print(i+1,x);
	}	
}

int main() {
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	bool first = true;
	while(scanf("%d %d",&t,&W) == 2) {
		if (first)
            first = false;
        else
            putchar('\n');
		
		memset(dp, -1, sizeof dp);
		
		cin >> n;
		for(int i = 0; i < n; i++){
		    cin >> D[i] >> V[i];
		    D[i]*=3*W;
		}
		cout << value(0, t) << endl;
		memset(item,false,sizeof item);
		print(0,t);
		cout << count(item,item+n,1)<<endl;
		
		/*for (int i = 0; i <= n; i++){
			for(int j = 0; j <= t; j++){
				cout << dp[i][j] << " ";				
			}
			cout << endl;			
		}*/
		for(int i = 0; i < n; i++){
			if(item[i])
			    cout << D[i]/(3*W)<<" "<<V[i]<<endl;			
	    }
	}
	
	return 0;
}
