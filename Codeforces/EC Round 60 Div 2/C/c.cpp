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
const double EPS=1e-9;

ll xs,ys,xf,yf;
ll n;
string s;

struct pto{
	ll x, y;
	pto(ll x=0, ll y=0):x(x),y(y){}
	pto operator+(pto a){return pto(x+a.x, y+a.y);}
	pto operator-(pto a){return pto(x-a.x, y-a.y);}
	pto operator+(ll a){return pto(x+a, y+a);}
	pto operator*(ll a){return pto(x*a, y*a);}
	pto operator/(ll a){return pto(x/a, y/a);}
	//dot product, producto interno:
	ll operator*(pto a){return x*a.x+y*a.y;}
	//module of the cross product or vectorial product:
	//if a is less than 180 clockwise from b, a^b>0
	ll operator^(pto a){return x*a.y-y*a.x;}
	//returns true if this is at the left side of line qr
	bool left(pto q, pto r){return ((q-*this)^(r-*this))>0;}
	bool operator<(const pto &a) const{return x<a.x-EPS || (abs(x-a.x)<EPS && y<a.y-EPS);}
bool operator==(pto a){return abs(x-a.x)<EPS && abs(y-a.y)<EPS;}
	ll norm(){return sqrt(x*x+y*y);}
	ll norm_sq(){return x*x+y*y;}
};

pto act,fin;

map<char, pto> mov;

pto conviene(pto actual){
	pto arr=actual+mov['U'];
	pto aba=actual+mov['D'];
	pto izq=actual+mov['L'];
	pto der=actual+mov['R'];
	
	map<int, pto> mejor;
	mejor[abs(arr.x-fin.x) + abs(arr.y-fin.y)] = arr;
	mejor[abs(aba.x-fin.x) + abs(aba.y-fin.y)] = aba;
	mejor[abs(izq.x-fin.x) + abs(izq.y-fin.y)] = izq;
	mejor[abs(der.x-fin.x) + abs(der.y-fin.y)] = der;
	mejor[abs(actual.x-fin.x) + abs(actual.y-fin.y)] = actual;
	auto it =  mejor.begin();	
	return it->second;
	
}

int main(){	
	ios::sync_with_stdio(0);cin.tie(NULL);

	mov['U']=pto(0,1);
	mov['D']=pto(0,-1);
	mov['L']=pto(-1,0);
	mov['R']=pto(1,0);
	
	cin>>xs>>ys>>xf>>yf>>n>>s;
	act=pto(xs,ys);
	fin=pto(xf,yf);
	int dias=0;
	int posi=0;
	string ss = s;
	sort(ss.begin(),ss.end());
	
	if(act.x<fin.x && act.y==fin.y && binary_search(ss.begin(),ss.end(),'R')==false){cout << -1;return 0;}
	if(act.x>fin.x && act.y==fin.y && binary_search(ss.begin(),ss.end(),'L')==false){cout << -1;return 0;}
	if(act.x==fin.x && act.y>fin.y && binary_search(ss.begin(),ss.end(),'D')==false){cout << -1;return 0;}
	if(act.x==fin.x && act.y<fin.y && binary_search(ss.begin(),ss.end(),'U')==false){cout << -1;return 0;}
	if(act.x<fin.x && act.y<fin.y && binary_search(ss.begin(),ss.end(),'U')==false && binary_search(ss.begin(),ss.end(),'R')==false){cout << -1;return 0;}
	if(act.x>fin.x && act.y<fin.y && binary_search(ss.begin(),ss.end(),'U')==false && binary_search(ss.begin(),ss.end(),'L')==false){cout << -1;return 0;}
	if(act.x<fin.x && act.y>fin.y && binary_search(ss.begin(),ss.end(),'D')==false && binary_search(ss.begin(),ss.end(),'R')==false){cout << -1;return 0;}
	if(act.x>fin.x && act.y>fin.y && binary_search(ss.begin(),ss.end(),'D')==false && binary_search(ss.begin(),ss.end(),'L')==false){cout << -1;return 0;}

	
	
	
	while(true){
		if(s[posi]=='U')act = act+mov['U'];			
		if(s[posi]=='D')act = act+mov['D'];
		if(s[posi]=='L')act = act+mov['L'];
		if(s[posi]=='R')act = act+mov['R'];
		act = conviene(act);		
		dias++;
		posi = (posi+1)%n;
		if(act==fin)break;
	}

	cout << dias;
	
	
	return 0;
}
