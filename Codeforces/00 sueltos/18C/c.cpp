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
const int maxn = 100010;

int n,a[maxn],pref[maxn],suf[maxn];
	
int main() {
    std::ios_base::sync_with_stdio(false);cin.tie(NULL);

	cin>>n;
	forn(i,n)cin>>a[i];
	pref[0]=a[0];
	forr(i,1,n)pref[i]=pref[i-1]+a[i];
	suf[n-1]=a[n-1];
	dforn(i,n-2)suf[i]=suf[i+1]+a[i];
	
	/*
	forn(i,n)cout << pref[i] << " ";
	cout << endl;
	forn(i,n)cout << suf[i] << " ";
	cout << endl;
	*/
	
	int ans=0;
	forn(i,n-1){
		if(pref[i]==suf[i+1])ans++;
	}
	cout << ans;
    return 0;
}

