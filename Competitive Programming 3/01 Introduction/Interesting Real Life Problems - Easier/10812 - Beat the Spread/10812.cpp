#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b);i++)
#define dfor(i,a,b) for(int i=(a);i>=(b);i--)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) dfor(i,n,0)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;

int s,d,n,ansx,ansy;

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n;
	while(n--){
		cin>>s>>d;
		int maxi=max(s,d);
		bool ans=false;
		dforn(i,maxi){
			if(ans)break;
			dforn(j,maxi){
				if(i+j==s && abs(i-j)==d){
					ans=true;
					ansx=max(i,j);
					ansy=min(i,j);
					break;
				}
			}
		}
		
		if(ans)cout << ansx << " " << ansy << "\n";
		else cout << "impossible\n";
	}
	return 0;
}
