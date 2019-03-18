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

vector<string> kb(9);

string s;
int T;

int main(){
	
	kb[0]="abc";
	kb[1]="def";
	kb[2]="ghi";
	kb[3]="jkl";
	kb[4]="mno";
	kb[5]="pqrs";	
	kb[6]="tuv";
	kb[7]="wxyz";
	kb[8]=" ";
	cin>>T;
	cin.ignore();
	int caso=1;
	ll ans;
	while(T--){
		getline(cin,s);
		ans=0;
		for(auto c: s){
			bool esta=false;
			forn(i,9){
				if(esta)break;
				forn(j,(int)kb[i].length()){
					if(kb[i][j]==c){
						ans+=(j+1);
						esta=true;
					}
					if(esta)break;
				}
			}
		}
		cout << "Case #" << caso++ << ": " << ans << "\n";
	}
	
	return 0;
}

