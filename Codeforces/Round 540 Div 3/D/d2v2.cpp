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
map<int,int> kses;
int main(){	
	//ios::sync_with_stdio(0);cin.tie(NULL);

	cin>>n>>m;
	int total=0;
	forn(i,n){cin>>v[i];total+=v[i];}
	if(total<m){cout<<-1;return 0;}
	sort(v,v+n,greater<int>());
	
	cout << endl;
	forn(i,n)cout << v[i] << " ";
	cout << endl;
	
	int k=1;
	parc[0]=v[0];
	forr(i,1,n){
		if(v[i]-k>0){
			parc[i]=parc[i-1]+(v[i]-k);
			kses[i]=k;
			k++;
		}
		else{
			parc[i]=v[i];
			kses[i]=k;
			k=1;
			continue;
		}
	}
	
	cout << endl;
	forn(i,n)cout << parc[i] << " ";
	cout << endl;
	
	int ans=0;
	int acum=0;
	int pos=1;
	while(pos<n && acum<m){
		if(parc[pos]<=parc[pos-1]){
			acum+=parc[pos-1];
			cout << acum << " --- subiendo --- \n";
			ans++;
		}
		pos++;
	}
	//if(acum<m){acum+=parc[n-1];ans++;}
	pos--;

	while(pos>=0 && acum<m){
		if(acum>m)break;
		acum=acum-(v[pos]-kses[pos]);
		acum+=v[pos];
		cout << acum << " --- bajando --- \n";
		ans++;
		pos--;
	}
	
		
	if(acum>=m)cout<<ans;
	else cout <<-1;
	
	return 0;
}

