#include <bits/stdc++.h>
using namespace std;

struct sc{
	string a;
	int ans;
};
	

int n, cont;
string s,ss,sss;
vector<sc> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("entrada.txt","r",stdin);
	cin>>n>>s;
	//cout << s << endl;
	for(int i=0;i<n-1;i++){
		ss=s[i];
		ss+=s[i+1];
		//cout << ss << endl;
		cont=0;
		for(int j=0;j<n-1;j++){
			//if(j==i)continue;
			sss=s[j];
			sss+=s[j+1];
			if(ss==sss){
				cont++;
			}
		}
		sc z;
		z.a=ss;
		z.ans=cont;
		//cout << ss << endl;
		v.push_back(z);
	}
	/*for (auto a:v)
	    cout << a.a << endl;*/
	sort(v.begin(),v.end(),[](sc a, sc b){return a.ans>b.ans;});
	/*for (auto a:v)
	    cout << a.a << endl;*/
	cout << v[0].a;
	
	
	return 0;
}
