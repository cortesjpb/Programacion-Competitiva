#include <bits/stdc++.h>
using namespace std;

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

int t,I,J;
int dr[]={1,1,0,-1,-1,-1,0,1};
int dc[]={0,1,1,1,0,-1,-1,-1};
vector<string> vs;
char cad[110];


int floodfill(int r, int c, char c1, char c2){
	if(r<0||c<0||r>=vs[0].length()||c>=vs.size())return 0;
	if(vs[r][c]!=c1)return 0;
	vs[r][c]=c2;
	int ans=1;
	forn(d,8)
		ans+=floodfill(r+dr[d],c+dc[d],c1,c2);
	return ans;
}



int main(){
	freopen("entrada.txt","r",stdin);
	
	
	
	char str[105];
    scanf("%d ", &t);
    while(t--) {
		int i,j;
        //memset(map, 0, sizeof(map));
        int n = 0;
        while(gets(str)) {
            if(str[0] == '\0')
                break;
            if(str[0] != 'W' && str[0] != 'L') {
                sscanf(str, "%d %d", &i, &j);
                cout << i << " " << j << endl;
               // memset(used, 0, sizeof(used));
               // ans = 0;
                //dfs(i-1, j-1);
                //printf("%d\n", ans);
            } else {
                sscanf(str, "%s", map[n]);
                n++;
            }
        }
        if(t)
            puts("");
    }
	
	
	/*scanf("%d",&t);
	//gets(cad);
	int c=1;
	while(t--){
		vs.clear();
		while(gets(cad)){
			if(cad[0]=='\0')break;
			else if(cad[0]!='W' && cad[0]!='L'){
				sscanf(cad,"%d %d",&I,&J);	
				cout << I << " " << J << endl;
			}else vs.push_back(cad);
			
		}*/
		
		
		
		
		/*gets(cad);
		cout << "#" << c++ << endl;
		vs.clear();
		while(gets(cad)){			
			if(cad[0]!='W' && cad[0]!='L')break;
			vs.push_back(cad);
		}		
		for(auto a: vs)
			cout << a << endl;
		while(strlen(cad)!=0){
			
			sscanf(cad,"%d %d",&I,&J);
			
			cout << I << " " << J << endl;
			gets(cad);
		}		
		gets(cad);*/
	//}	
	
	return 0;
}
