#include <bits/stdc++.h>
using namespace std;

int N, K;
int dp[1125][200][15];
vector<int> vp;


vector<int> primes() {
	vector<int> v;
	bool son[1125];
	memset(son, true, sizeof son);
	for(int p=2; p*p<=1121; p++)
		if(son[p])
			for(int i = p*2; i<=1121;i+=p)
				son[i]=false;
    for(int i = 2; i <=1121; i++)
        if(son[i])
            v.emplace_back(i);
    return v;
}

int ways(int x,int i, int n){	
	if(n==K && x==0) return 1;
	if(n==K && x!=0) return 0;
	if(x<0||vp[i]>N||i==vp.size()) return 0;
	if(dp[x][i][n]!=-1) return dp[x][i][n];
	return dp[x][i][n] = ways(x,i+1,n)+ways(x-vp[i],i+1,n+1);	
}


int main() {
	//freopen("entrada.txt", "r", stdin);
	//freopen("salida.txt","w",stdout);
	vp = primes();	
	while(cin >> N >> K){		
		if(N==0 and K==0) return 0;
		memset(dp, -1, sizeof dp);
		cout << ways(N,0,0) << endl;
	}

	return 0;
}
