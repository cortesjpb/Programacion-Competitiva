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

int n,m,v[110];
int parc[110];

int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);

	cin>>n>>m;
	int total=0;
	forn(i,n){cin>>v[i];total+=v[i];}
	if(total<m){cout<<-1;return 0;}
	sort(v,v+n,greater<int>());
	int k=1;
	parc[0]=v[0];
	forr(i,1,n){
		if(v[i]-k>0){
			parc[i]=parc[i-1]+(v[i]-k);
			k++;
		}
		else{
			parc[i]=v[i];
			k=1;
			continue;
		}
	}
	int ans=0;
	int acum=0;
	int pos=1;
	while(pos<n && acum<m){
		if(parc[pos]<=parc[pos-1]){
			acum+=parc[pos-1];
			ans++;
		}
		pos++;
	}
	if(acum<m){acum+=parc[n-1];ans++;}
	pos--;
	if(acum<m){
		while(pos>=0){
			if(acum>m)break;
			acum-=parc[pos];
			acum+=v[pos];
			ans++;
			pos--;
		}
	}
	cout << acum << " -------- " << endl;
	/*forr(i,1,n){
		if(acum>=m)break;
		if(parc[i]<=parc[i-1]){
			acum+=parc[i-1];
			ans++;
		}
	}*/	
	if(acum>=m)cout<<ans;
	else cout <<-1;
	/*forn(i,n)cout << parc[i] << " ";		
	cout << endl;*/
	
	return 0;
}

