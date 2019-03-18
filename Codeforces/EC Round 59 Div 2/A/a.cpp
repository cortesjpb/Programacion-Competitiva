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

string s;
int n,q;

int main(){	
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>q;
	while(q--){
		cin>>n>>s;
		if(n>2){
			cout << "YES\n";
			cout << 2 << "\n";
			cout << s[0] << " ";
			forn(i,n-1)
				cout << s[i+1];
			cout << "\n";
		}else{
			if(s[0]<s[1]){
				cout << "YES\n";
				cout << 2 << "\n";
				cout << s[0] << " " << s[1] << "\n";
			}else {cout << "NO\n";}
		}
	}
	
	return 0;
}

