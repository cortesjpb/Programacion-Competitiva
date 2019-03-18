#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int n, k;
set<int> s;
int cant[1000100];

int main(){
	
	freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);cin.tie(NULL);
	int a;
	long long ans=0;
	while(cin>>n){
		if(n==0)return 0;
		memset(cant,0,sizeof(cant));
		s.clear();
		ans=0;
		while(n--){			
			cin>>k;
			forn(i,k){
				cin>>a;
				s.insert(a);
				cant[a]++;
			}
			int maxi=*s.rbegin();
			int mini=*s.begin();			
			cant[maxi]--;
			cant[mini]--;
			ans+=(maxi-mini);
			if(cant[maxi]==0)s.erase(maxi);
			if(cant[mini]==0)s.erase(mini);
		}
		cout << ans << "\n";
	}
	return 0;
}
	
