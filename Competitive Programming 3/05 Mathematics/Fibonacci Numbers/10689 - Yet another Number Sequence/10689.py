t = int(input())
f = [0]
period = [0,60,300,1500,15000]
mod = [0,10,100,1000,10000]
for i in range(16000):
	f.append(i)
f[0]=0
f[1]=1
for i in range(2,16000):
	f[i]=f[i-1]+f[i-2]
for _ in range(t):
	a,b,n,m=map(int,input().split())
	n = n%period[m]
	if n==0:
		print(a%mod[m])
		continue
	if n==1:
		print(b%mod[m])
		continue	
	newm = n%period[m]
	res = (a*f[newm-1])+(b*f[newm])
	print(res%mod[m])
