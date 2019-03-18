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

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	while(cin>>s){
		if(s=="END")return 0;
		(s=="1")?cout<<"1\n":(s.length()==1)?cout<<"2\n":(s.length()<10)?cout << "3\n":cout << "4\n";
		
	}
	return 0;
}
