#include <bits/stdc++.h>
using namespace std;

struct work{
	int id,t,f;
};

int t,n;
work v[1010];

bool cmp(work a, work b){
	double ra = (double)a.f/a.t;
	double rb = (double)b.f/b.t;
	if(ra!=rb) return ra>rb;
	else return a.id<b.id;
}

int main(){	
	//freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			v[i].id=i+1;
			cin>>v[i].t;
			cin>>v[i].f;
		}
		stable_sort(v,v+n,cmp);
		cout << v[0].id;
		for(int i=1;i<n;i++)
			cout <<" "<<v[i].id;
		cout <<"\n";
		if(t) cout << "\n";
	}
	return 0;
}
