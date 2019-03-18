#include <bits/stdc++.h>
using namespace std;
 
const int N=100005;
 
int arr[N];
 
struct segment{
    int _presum,_sufsum,_totalsum,_maxsum;
 
    void mergee(segment left,segment right)
    {
        _presum=max(left._presum,left._totalsum+right._presum);
        _sufsum=max(right._sufsum,right._totalsum+left._sufsum);
        _totalsum=left._totalsum+right._totalsum;
        _maxsum=max(_presum,max(_sufsum,max(left._maxsum,max(right._maxsum,left._sufsum+right._presum))));
    }
}seg[4*N];
 
void build(int bajo,int high,int node)
{
    if(bajo>high)
    return;
    if(bajo == high)
    {
        seg[node]._presum=seg[node]._sufsum=seg[node]._totalsum=seg[node]._maxsum=arr[bajo];
        return;
    }
    int mid=bajo+high>>1;
    build(bajo,mid,2*node+1);
    build(mid+1,high,2*node+2);
    seg[node].mergee(seg[2*node+1],seg[2*node+2]);
}
 
segment query(int bajo,int high,int lq,int hq,int node)
{
    segment ans;
    ans._presum=ans._sufsum=ans._totalsum=ans._maxsum=INT_MIN;
    if(bajo>high || bajo>hq || high<lq)
    return ans;
    if(lq<=bajo && high<=hq)
    return seg[node];
    int mid=bajo+high>>1;
    if(lq>mid)
    return query(mid+1,high,lq,hq,2*node+2);
    if(hq<=mid)
    return query(bajo,mid,lq,hq,2*node+1);
    ans.mergee(query(bajo,mid,lq,hq,2*node+1),query(mid+1,high,lq,hq,2*node+2));
    return ans;
}
 
int main() {
    int n;
    scanf("%d",&n);
    register int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    build(0,n-1,0);
    int m;
    scanf("%d",&m);
    int x,y;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",query(0,n-1,x-1,y-1,0)._maxsum);
    }
    return 0;
}
