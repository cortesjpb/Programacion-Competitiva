#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

vector<string> vs;
int n;
int dr[]{1,0,-1,0};
int dc[]={0,1,0,-1};

char cad[85];


void floodfill (int r, int c, char c1, char c2){	
	if(vs[r][c]!=c1 && vs[r][c]!='*')return;
	vs[r][c]=c2;
	forn(d,4)
		floodfill(r+dr[d],c+dc[d],c1,c2);
}

int main(){
	//freopen("entrada.txt","r",stdin);
	//ios::sync_with_stdio(0);
	//cin.tie(NULL);
	
	cin>>n;
	gets(cad);
	while(n--){
		vs.clear();
		while(gets(cad)){
			if(cad[0]=='_')break;
			string s=cad;
			vs.push_back(s);
		}
		
		for(int i=0;i<vs.size();i++){
			for(int j=0;j<vs[i].size();j++){
				if(vs[i][j]=='*')
					floodfill(i,j,' ','#');
			}
		}
		
		for(int i=0;i<vs.size();i++){
			for(int j=0;j<vs[i].size();j++){
				cout << vs[i][j];
			}
			cout << endl;
		}
		
		cout << cad << "\n";
	}
	
	
	
	
	return 0;
}
