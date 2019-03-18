#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b);i++)
#define dfor(i,a,b) for(int i=(a);i>=(b);i--)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) dfor(i,n,0)

int N,colors[550][7];
int dp[550][8];
vector<string> vs = {"front","back","left","right","top","bottom"};

int f(int i, int prev){
	
	if(dp[i][prev]!=-1)return dp[i][prev];
	int of=(prev%2==0)?prev+1:prev-1;
	int ans=1;
	forr(k,i+1,N){
		forn(l,6){
			if(colors[k][l]==colors[i][of]){
				ans=max(ans,1+f(k,l));
			}
		}
	}
	return dp[i][prev]=ans;
}

void bt(int i, int prev){
	
	if(f(i,prev)==1){
		cout << i+1 << " " << vs[prev] << "\n";
		return;
	}
	int of=(prev%2==0)?prev+1:prev-1;	
	forr(k,i+1,N){
		forn(l,6){
			if(colors[k][l]==colors[i][of] && 1+f(k,l)==dp[i][prev]){				
				cout << i+1 << " " << vs[prev] << "\n";
				bt(k,l);				
				return;
			}
		}
	}
	
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int c=1;
	while(cin>>N){
		if(N==0)return 0;
		forn(i,N){
			forn(j,6){
				cin>>colors[i][j];
			}
		}
		memset(dp,-1,sizeof(dp));
		int maxi=-1;
		
		forn(i,N){
			forn(j,6){
				maxi=max(maxi,f(i,j));
			}
		}
		bool ready=false;
		forn(i,N){
			forn(j,6){
				if(maxi==f(i,j)){
					if(c>1)cout<<"\n";
					cout << "Case #"  << c++ << "\n";
					cout << maxi << "\n";
					bt(i,j);
					ready=1;
					break;
				}
			}
			if(ready)break;
		}
		
		/*forn(a,6){
			if(maxi==f(0,a)){
				if(c>1)cout<<"\n";
				cout << "Case #"  << c++ << "\n";
				cout << maxi << "\n";
				bt(0,a);				
				break;
			}
		}*/
	}
	
	
	
	
	return 0;
}
