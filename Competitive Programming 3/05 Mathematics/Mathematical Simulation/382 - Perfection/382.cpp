#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b);i++)
#define dfor(i,a,b) for(int i=(a);i>=(b);i--)
#define forn(i,n) forr(i,0,n)
#define dforc(i,n) dfor(i,n,0)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;

int n;
int main(){
	
	cout<<"PERFECTION OUTPUT\n";
	while(cin>>n){
		if(n==0)break;
		int acum=0;
		forr(i,1,n)
			if(n%i==0)acum+=i;
		printf("%5d  ", n);
		if(acum==n)cout<<"PERFECT\n";
		else if(acum<n)cout<<"DEFICIENT\n";
		else cout<<"ABUNDANT\n";		
	}
	cout<<"END OF OUTPUT\n";
	return 0;
}

