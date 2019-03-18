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
#define dbg(v) cout << #v" = "<<v<<endl//;)
typedef long long ll;
typedef pair<int,int> ii;

ll n,v[100010],cont[100010];

int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>n;
	ll maxi=-1;
	forn(i,n){
		cin>>v[i];
		maxi=max(maxi,v[i]);
	}	
	cont[0]=(v[0]==maxi)?1:0;
	forr(i,1,n){
		if(v[i]==maxi)cont[i]=cont[i-1]+1;
		else cont[i]=0;
	}
	cout << *max_element(cont,cont+n);
	return 0;
}

