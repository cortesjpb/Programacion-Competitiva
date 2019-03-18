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

int n,k,v[5010];
	
int main() {
    //std::ios_base::sync_with_stdio(false);
    cin>>n>>k;
	forr(i,1,n+1)v[i]=1;
	int pos=k;
	int s=n;
	int ans=0;
	if(k==1){
		pos=2;
		v[pos]++;
		v[1]=0;
		s--;
		ans+=2;
	}
	while(s && pos<n+1){
		while(v[pos]){
			v[pos]--;
			v[pos-1]++;
			ans++;			
		}
		s--;ans++;
		pos++;
		ans++;		
	}
	if(k!=1)ans--;
	if(k!=1)ans+=abs(pos-k);
	pos=k-1;
	while(s && pos){
		while(v[pos]){
			v[pos]--;
			v[pos+1]++;
			ans++;			
		}
		s--;ans++;
		pos--;
		ans++;		
	}
	if(k!=1)ans--;	
	
	forr(i,1,n+1)v[i]=1;
	pos=k;
	s=n;
	int ans2=0;
	while(s && pos){
		while(v[pos]){
			v[pos]--;
			v[pos+1]++;
			ans2++;			
		}
		s--;ans2++;
		pos--;
		ans2++;		
	}
	if(k!=1)ans2--;
	if(k!=1)ans2+=abs(pos-k);
	pos=k+1;
	while(s && pos<n+1){
		while(v[pos]){
			v[pos]--;
			v[pos-1]++;
			ans2++;			
		}
		s--;ans2++;		
		pos++;
		ans2++;
	}
	if(k!=1)ans2--;
	cout << min(ans,ans2);
	
    return 0;
}

