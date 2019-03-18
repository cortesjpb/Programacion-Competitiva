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

ll n,v[200010];
ll parciales[200010];


int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);
	cin>>n;
	forr(i,1,n+1)cin>>v[i];
	ll odd=0,even=0;
	ll ans=0;
	forr(i,1,n+1){
		if(i%2==0){
			even+=v[i];
			parciales[i]=even;
		}else{
			odd+=v[i];
			parciales[i]=odd;
		}
	}
	int newodd,neweven;
	newodd=even;
	neweven=odd-v[1];
	if(newodd==neweven)ans++;
	newodd=v[1]+(even-v[2]);
	neweven=odd-(v[1]);
	if(newodd==neweven)ans++;
	forr(i,3,n+1){
		if(i%2==0){
			neweven=parciales[i-2]+(odd-parciales[i-1]);
			newodd=parciales[i-1]+(even-parciales[i]);
		}else{
			neweven=parciales[i-2]+(even-parciales[i-1]);
			newodd=parciales[i-1]+(odd-parciales[i]);
		}
		if(newodd==neweven)ans++;
	}
	
	cout << ans;

	return 0;
}

