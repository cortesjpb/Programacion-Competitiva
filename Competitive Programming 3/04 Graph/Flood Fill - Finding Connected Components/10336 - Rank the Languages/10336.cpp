#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int h,w,n;
char g[1000][1000];

int dr[]={1,0,-1,0};
int dc[]={0,1,0,-1};
map<char,int> m;
vector<pair<char,int>> vc;

void floodfill(int r, int c, char c1, char c2){
	if(r<0||c<0||r>=h||c>=w)return;
	if(g[r][c]!=c1)return;
	g[r][c]=c2;
	forn(d,4)
		floodfill(r+dr[d],c+dc[d],c1,c2);
}

bool cmp(pair<char,int> a, pair<char,int>b){
	if(a.second!=b.second)return a.second>b.second;
	return a.first<b.first;
}

int main(){
	freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin>>n;
	int c=1;
	while(n--){
		m.clear();vc.clear();
		cin>>h>>w;
		forn(i,h)
			forn(j,w)
				cin>>g[i][j];
		forn(i,h)
			forn(j,w){
				if(g[i][j]!='.'){					
					m[g[i][j]]++;
					floodfill(i,j,g[i][j],'.');	
				}
			}
		for(auto a: m)
			vc.push_back({a.first,a.second});
		sort(vc.begin(),vc.end(),cmp);
		//printf("World #%d\n",c++);
		cout << "World #" << c++ << "\n";
		for(auto v: vc)
			cout << v.first << ": " << v.second << "\n";
	}	
	return 0;
}
