#include <bits/stdc++.h>
using namespace std;

int n, v[100010],length[100010];

vector<int>vs[100010];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("entrada.txt","r",stdin);
	cin>>n;
	vector<int>vs[n];
	for(int i=0;i<n;i++)
		cin>>v[i];
		
    for(int j=0;j<n;j++){
		length[j]=1;		
		for(int i=0;i<j;i++){
			if(v[i]==v[j]-1){
				if(length[j]<length[i]+1){
					length[j]=length[i]+1;
					
				}
				vs[j].push_back(i+1);
			}
		}
		vs[j].push_back(j+1);
	}
	
	auto it=max_element(length,length+n);
	int maxi=distance(length,it);
	cout << vs[maxi].size() << " " << vs[maxi-1].size() << " " << vs[maxi+1].size() << endl;
	for (auto a: vs)
	    cout << a.size() << endl;
	/*for(int i=0;i<n;i++)
	    cout << length[i] << endl;*/
	
	//cout << *max_element(length,length+n);
	
	
	
	
	return 0;
}
