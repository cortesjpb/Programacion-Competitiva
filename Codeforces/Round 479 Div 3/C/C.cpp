#include <bits/stdc++.h>
using namespace std;

bool esta[1000000010];
int n, k;
//int v[100010];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("entrada.txt","r",stdin);
    cin>>n>>k;
    vector<int>v(n);
    
    for(int i=0;i<n;i++)
        cin>>v[i];
    auto it=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
    sort(v.begin(),v.end(),greater<int>());
    if(v.size()<k) cout << -1;
    else cout << v[v.size()-k];
    /*
    bool es=true;
    for(int i=n-k-1;i>=0;i--){
		
	}*/
	
	
	
	return 0;
}
