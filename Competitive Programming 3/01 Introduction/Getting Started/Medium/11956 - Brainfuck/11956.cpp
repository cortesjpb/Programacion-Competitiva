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

int T;
int v[100];
string s;

string tohexa(int num){
	string ans;
	ans+=((num/16)>9)?'A'+((num/16)-10):'0'+(num/16);
	ans+=((num%16)>9)?'A'+((num%16)-10):'0'+(num%16);	
	return ans;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	
	cin>>T;
	int caso=1,p;
	while(T--){
		memset(v,0,sizeof(v));
		p=0;
		cin>>s;		
		for(auto c: s){
			if(c=='>'){
				p=(p+1)%100;
			}
			else if(c=='<'){
				p=(p-1<0)?99:p-1;
			}
			else if(c=='+'){
				v[p]=(v[p]+1)%256;
			}
			else if(c=='-'){
				v[p]=(v[p]-1<0)?255:v[p]-1;
			}
		}
		cout << "Case " << caso++ << ": " << tohexa(v[0]);
		forr(i,1,100)cout << " " << tohexa(v[i]);
		cout << "\n";
		
	}
	return 0;
}
