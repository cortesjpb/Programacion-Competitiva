#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define M_PI           3.14159265358979323846

/*#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")*/


struct pto{
	int x,y;
	pto(int x=0, int y=0):x(x),y(y){}
	pto operator-(pto a){return pto(x-a.x, y-a.y);}
	pto operator*(float a){return pto(x*a, y*a);}
	int operator*(pto a){return x*a.x+y*a.y;}
	int operator^(pto a){return x*a.y-y*a.x;}
	int norm_sq(){return x*x+y*y;}
};

/*double angle(pto a, pto o, pto b){
	pto oa=a-o, ob=b-o;
	return acos(oa*ob / sqrt(oa.norm_sq() * ob.norm_sq()));
}*/

int angle(pto a, pto o, pto b){
	pto oa=a-o, ob=b-o;
	return oa*ob;}

int n,a,b;
vector<pto> vp(310);
int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;
	forn(i,n){
		cin>>a>>b;
		vp[i]={a,b};
	}
	int ans=0;
	forn(i,n){
		forn(j,n){
			forn(k,n){
				if(i!=j && i != k && j!=k){
					if(angle(vp[j],vp[i],vp[k])==0){	
						//cout << angle(vp[i],vp[j],vp[k]) << endl;
						//cout << i << " " << j << " " << k << endl;				
						ans++;					
					}
				}
			}
		}
	}
	cout << ans/2 << "\n";
	
	return 0;
}

