#include <bits/stdc++.h>
using namespace std;

struct team{
	int id;
	int ac=0, sb=0;
	bool acp[10];
	int p=0, tr[10];	
};

team teams[102];
string s;
int cid, pr, tiempo,t, maxi,c;
char L, cad[50];

bool cmp(team a, team b){
	if(a.ac!=b.ac) return a.ac>b.ac;
	if(a.p!=b.p) return a.p<b.p;
	return a.id<b.id;
}

int main(){	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	cin>>t;
	gets(cad);
	gets(cad);
	maxi=-1;
	c=0;
	for(int i=1;i<=100;i++){
		teams[i].id=i;
		teams[i].ac=0;
		teams[i].p=0;
		teams[i].sb=0;
		memset(teams[i].acp,0,sizeof(teams[i].acp));	
		memset(teams[i].tr,0,sizeof(teams[i].tr));		
	}
	while(t--){				
		while(gets(cad) and cad[0]!='\0'){
			//cout << cad << "\n";			
			sscanf(cad,"%d %d %d %c",&cid,&pr,&tiempo,&L);
			/*if(cid==68)
			    printf("----------- %d %d %d %c\n",cid,pr,tiempo,L);*/
			teams[cid].sb++;
			if(L=='I'){
				teams[cid].tr[pr]++;
							
			}else if(L=='C' and teams[cid].acp[pr]==false){
				teams[cid].acp[pr]=true;				
				teams[cid].p+=tiempo+teams[cid].tr[pr]*20;
				teams[cid].ac++;
			}
			maxi=max(cid,maxi);
		}	
			sort(teams+1,teams+maxi+1,cmp);
			for (int i=1;i<maxi+1;i++){
				if(teams[i].sb!=0)
				    printf("%d %d %d\n",teams[i].id,teams[i].ac,teams[i].p);
			}
			if(t>0) cout << '\n';
			for(int i=1;i<=100;i++){
				teams[i].id=i;
				teams[i].sb=0;
				teams[i].ac=0;
				teams[i].p=0;
				memset(teams[i].acp,0,sizeof(teams[i].acp));	
				memset(teams[i].tr,0,sizeof(teams[i].tr));		
			}
 	}
	
	
	
	return 0;
}
