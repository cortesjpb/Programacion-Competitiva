r=[0 for i in range(10010)]
n=int(input())
a=list(map(int,input().split()))
ans=0
maxi=-1
for i in range(n):
	maxi=max(maxi,a[i])
	if(maxi==i+1):ans=ans+1
print(ans)
