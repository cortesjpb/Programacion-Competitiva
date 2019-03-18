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

string s;
int m,f,t;

int main(){	
	
	cin>>t;
	cin.ignore();
	while(t--){
		m=0,f=0;
		s.clear();
		getline(cin,s);		
		for(auto c: s){
			if(c=='M')m++;
			if(c=='F')f++;
		}
		if(m==f && s.length()>2)cout<<"LOOP\n";
		else cout<<"NO LOOP\n";
	}
	return 0;
}

