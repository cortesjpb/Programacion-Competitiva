#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)

const int MAXN=100100;
int n,r,a;

vector<ii> vp;

bool cmp(ii a, ii b){
	if(a.first!=b.first)return a.first<b.first;
	return a.second>b.second;
}

int main() {
    //freopen("entrada.txt", "r", stdin);
    //ios::sync_with_stdio(0);cin.tie(NULL);
    cin>>n>>r;
    r--;
    int l,rr;
    //vp.push_back({-1,-1});
    forn(i,n){
		cin>>a;
		if(a==1){
			if(i-r<0)l=0;
			else l=i-r;
			if(i+r>n-1)rr=n-1;
			else rr=i+r;
			vp.push_back({l,rr});
		}
	}
	if(vp.size()==0){cout << -1; return 0;}	
	//if(r==0 && vp.size()==n){cout << n; return 0;}
	sort(vp.begin(),vp.end(),cmp);
	
	/*for(auto c: vp)
		cout << c.first << " " << c.second << endl;*/

	int cant=vp.size();	
	if(vp[0].first!=0 || vp[cant-1].second!=n-1){cout << -1; return 0;}
	
	int ind=cant-1;
	int ans=0;
	int maxind=0;
	while(ind>0 && vp[ind-1].second==n-1)ind--;
	while(maxind<n-1 && vp[maxind+1].first==0)maxind++;
	cout << maxind << " " << ind << endl;
	if(vp.size()==1 || (vp[ind].first==0 && vp[ind].second==n-1))ans=1;else ans=2;
	int act=vp[ind].first;
	while(ind>maxind){
		if(vp[ind-1].first<=act-1 && vp[ind-1].second>=act-1){ind--;continue;}
		if(vp[ind].first==act){cout << -1; return 0;}
		ans++;
		act=vp[ind].first;
		ind--;
	}
	
	cout << ans << "\n";
    return 0;
}
