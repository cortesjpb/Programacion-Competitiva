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

int n,m;
ll a[510][510],b[510][510];

vector<ll>vec1,vec2;


int main() {
    //std::ios_base::sync_with_stdio(false);
 
	cin>>n>>m;
	forn(i,n)forn(j,m)cin>>a[i][j];
	forn(i,n)forn(j,m)cin>>b[i][j];
	bool ans=true;
	forn(i,m){
		vec1.push_back(a[0][i]);
		vec2.push_back(b[0][i]);
		int x=1,y=i-1;		
		while(x<n && y>=0){
			vec1.push_back(a[x][y]);
			vec2.push_back(b[x][y]);
			x++;y--;
		}
		sort(vec1.begin(),vec1.end());
		sort(vec2.begin(),vec2.end());
		/*cout << endl;
		for(auto c: vec1)cout << c << " ";
		cout << endl;
		for(auto c: vec2)cout << c << " ";
		cout << endl;*/
		bool son=true;
		int largo=vec1.size();
		forn(j,largo)if(vec1[j]!=vec2[j]){son=false;break;}		
		ans=son;
		vec1.clear();vec2.clear();
		if(ans==false)break;
	}
	vec1.clear();vec2.clear();
	if(ans==false){
		cout << "NO";
		return 0;
	}
	forn(i,n){
		vec1.push_back(a[i][m-1]);
		vec2.push_back(b[i][m-1]);
		int x=i+1,y=m-2;		
		while(x<n && y>=0){
			vec1.push_back(a[x][y]);
			vec2.push_back(b[x][y]);
			x++;y--;
		}
		sort(vec1.begin(),vec1.end());
		sort(vec2.begin(),vec2.end());
		/*cout << endl;
		for(auto c: vec1)cout << c << " ";
		cout << endl;
		for(auto c: vec2)cout << c << " ";
		cout << endl;*/
		int largo=vec1.size();
		bool son=true;
		forn(j,largo)if(vec1[j]!=vec2[j]){son=false;break;}		
		ans=son;
		vec1.clear();vec2.clear();
		if(ans==false)break;
	}
	
	if(ans)cout << "YES";
	else cout << "NO";
 
    return 0;
}
