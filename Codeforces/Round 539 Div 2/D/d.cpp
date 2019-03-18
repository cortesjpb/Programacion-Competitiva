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

string ss;

bool ispaldif(string sss){
	cout << sss << " ----------" <<endl; 
	int length=sss.length();
	forn(i,length){
		if(sss[i]!=sss[length-(i+1)])return false;
	}
	if(ss==sss)return false;
	else return true;
}

int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>ss;
	int ans=9999;
	int mitad=ss.length()/2;
	bool cumple=false;
	forr(i,1,mitad+1){		
		string copia=ss;
		string nuevo;
		forn(j,i){nuevo.push_back(copia.back());copia.pop_back();}
		reverse(nuevo.begin(),nuevo.end());	
		reverse(copia.begin(),copia.end());	
		cumple=ispaldif(nuevo+copia);
		if(cumple){
			ans=i;
			break;
		}
	}
	cout << ans << endl;
	
	

	return 0;
}

