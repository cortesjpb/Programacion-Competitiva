#include <bits/stdc++.h>
using namespace std;
 
int L, ans;
string s;
 
int main() {
    while(cin>>L){
        if(L==0)return 0;
        cin>>s;
        int r=-3000000, d=3000000;
        ans = 1000000000;
        for(int i=0;i<L;i++){
            if(s[i]=='Z'){ans=0;break;}
            else if(s[i]=='R')r=i;
            else if(s[i]=='D')d=i;
            if(abs(r-d)<ans)ans=abs(r-d);
        }
        cout << ans << endl;
    }
    return 0;
}
