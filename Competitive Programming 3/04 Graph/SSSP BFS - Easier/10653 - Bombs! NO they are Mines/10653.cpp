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

struct cell{
	int ro,co,dist;
};

int R,C,ans;
int sr,sc,destr,destc;
char g[1100][1100];
int dr[]{1,0,-1,0};
int dc[]={0,1,0,-1};

void bfs(){	
	cell act;
	queue<cell>q;q.push({sr,sc,0});
	while(!q.empty()){
		act=q.front();q.pop();
		if(act.ro==destr && act.co==destc)ans=min(ans,act.dist);
		forn(i,4){
			int nr=act.ro+dr[i], nc=act.co+dc[i];			
			if(nr<0||nc<0||nr>=R||nc>=C)continue;
			if(g[nr][nc]!='*' && g[nr][nc]!='.'){
				g[nr][nc]='.';				
				q.push({nr,nc,act.dist+1});
			}
		}
	}
}

int main(){
	freopen("entrada.txt","r",stdin);
	
	while(cin>>R>>C){
		if(R==0 && C==0)return 0;
		forn(i,R)
			forn(j,C)
				g[i][j]='-';
		int rb,r,c,nb;
		cin>>rb;
		forn(i,rb){
			cin>>r;
			cin>>nb;
			forn(j,nb){
				cin>>c;
				g[r][c]='*';
			}			
		}		
		cin>>sr>>sc>>destr>>destc;		
		ans=10e9;
		bfs();
		cout << ans << endl;
	}
	return 0;
}
