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

int n;
string s;

int main(){
	
	cin>>n;
	while(n--){
		cin>>s;
		if(s=="1" || s=="4" || s=="78")cout << "+\n";
		else if(s[s.length()-1]=='5' && s[s.length()-2]=='3')cout << "-\n";
		else if(s[0]=='9' && s[s.length()-1]=='4')cout << "*\n";
		else if(s[0]=='1' && s[1]=='9' && s[2]=='0')cout << "?\n";
		else cout << "?\n";
	}
	return 0;
}
