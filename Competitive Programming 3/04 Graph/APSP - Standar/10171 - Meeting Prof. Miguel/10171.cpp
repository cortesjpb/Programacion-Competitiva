#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define INF 1e9

int gy[40][40],gm[40][40];
int total[40];
int N;

void apspy(){
	forn(k,30)forn(i,30)forn(j,30)if(gy[k][j]!=INF)
		gy[i][j]=min(gy[i][j],gy[i][k]+gy[k][j]);
}

void apspm(){
	forn(k,30)forn(i,30)forn(j,30)if(gm[k][j]!=INF)
		gm[i][j]=min(gm[i][j],gm[i][k]+gm[k][j]);
}


int main(){
	
	//freopen("entrada.txt","r",stdin);	
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin>>N){
		if(N==0)return 0;
		forn(i,30) forn(j,30){gy[i][j]=gm[i][j]=INF;}
		forn(i,N){
			char gt,dt,u,v;
			int w;
			cin>>gt>>dt>>u>>v>>w;
			if(gt=='Y'){
				if(dt=='B'){
					gy[u-'A'][v-'A']=w;
					gy[v-'A'][u-'A']=w;
				}else{
					gy[u-'A'][v-'A']=w;
				}
			}else{
				if(dt=='B'){
					gm[u-'A'][v-'A']=w;
					gm[v-'A'][u-'A']=w;
				}else{
					gm[u-'A'][v-'A']=w;
				}
			}
		}
		char SY,SM;
		cin>>SY>>SM;		
		apspy();
		apspm();
		forn(i,30)gy[i][i]=gm[i][i]=0;
		fill(total,total+30,INF);
		forn(i,30)
			if(gy[SY-'A'][i]!= INF && gm[SM-'A'][i]!= INF)
				total[i]=gy[SY-'A'][i]+gm[SM-'A'][i];
		
		int ans=*min_element(total,total+30);
		if(ans==INF)cout << "You will never meet.\n";
		else{cout << ans;forn(i,30)if(total[i]==ans)cout << " " << (char)(i+'A');cout<<"\n";}
	}
	
	return 0;
}

