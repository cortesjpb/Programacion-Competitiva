#include <bits/stdc++.h>
using namespace std;

int n;
priority_queue<int,vector<int>, std::greater<int> > pq;
int main(){
	
	freopen("entrada.txt","r",stdin);
	ios::sync_with_stdio(0);cin.tie(NULL);
	int a;
	while(cin>>n){
		if(n==0)return 0;
		while(n--){
			cin>>a;
			pq.push(a);
		}
		long long ans=0,res=0;
		res=pq.top();
		pq.pop();
		res+=pq.top();
		pq.pop();
		ans+=res;
		while(!pq.empty()){
			res+=(long long)pq.top();
			pq.pop();
			ans+=(long long)res;
		}
		cout << ans << "\n";
	}	
	return 0;
}
