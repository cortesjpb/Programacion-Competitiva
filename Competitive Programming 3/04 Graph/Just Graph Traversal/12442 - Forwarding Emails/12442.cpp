#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
 
vi g[50010];
bool vst[50010];
bool recstack[50010];
int dp[50010];
int t,n,s,cs,cont;
bool ciclo;
 
void dfs(int u, int prev){
    cont++;
    vst[u]=1;recstack[u]=1;
    for(auto v: g[u]){
        if(vst[v]!=0 && recstack[v]!=0){cs=v;ciclo=true;}
        else if(vst[v]!=0){ciclo=false;cont=dp[v]+1;}
        else dfs(v);       
    }
    if(ciclo)dp[u]=cont;
    else dp[u]=cont++;
    if(u==cs)ciclo=false;
    recstack[u]=0;
}
 
 
int main(){   
    //freopen("entrada.txt","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>t;
    int c=1;
    while(t--){
        memset(dp,-1,sizeof(dp));
        memset(vst,0,sizeof(vst));
        memset(recstack,0,sizeof(recstack));
        cin>>n;
        int u,v;       
        for(int i=0;i<n;i++){
            cin>>u>>v;     
            g[u].push_back(v);
        }
       
        for(int i=1;i<=n;i++){
            cont=0;ciclo=false;
            if(vst[i]==0){s=i;dfs(i);}         
        }
        printf("Case %d: %d\n",c++,max_element(dp+1,dp+1+n)-dp);
        //for(int i=1;i<=n;i++)cout << dp[i] << " ";
        for(int i=1;i<=n;i++) g[i].clear();       
    }
    return 0;
}
