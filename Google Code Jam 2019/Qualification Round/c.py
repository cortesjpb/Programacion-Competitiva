import math
letras='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
t=int(input())
caso=1
while t:
	N,l=map(int,input().split())
	v=[]
	v=list(map(int,input().split()))
	primos=set({})
	primo=math.gcd(max(v[0],v[1]),min(v[0],v[1]))
	primos.add(v[0]//primo)	
	primo=math.gcd(max(v[l-1],v[l-2]),min(v[l-1],v[l-2]))
	primos.add(v[l-1]//primo)	
	for i in range(1,l):
		primo=math.gcd(max(v[i],v[i-1]),min(v[i],v[i-1]))
		primos.add(primo)		
	primos=sorted(primos)
		
	vale=dict([])
	for i in range(26):vale[primos[i]]=letras[i]	
	ans=''
	esta=0
	ulti=0
	for i in range(26):
		if esta:break
		for j in range(25,-1,-1):
			if i!=j:
				if primos[i]*primos[j]==v[0]:
					ulti=primos[j]
					ans+=vale[primos[i]]
					ans+=vale[primos[j]]
					esta=1
					break
	a=1
	while a<l:
		for i in range(26):
			if ulti*primos[i]==v[a]:
				ans+=vale[primos[i]]
				ulti=primos[i]				
				break
		a+=1
	print('Case #'+str(caso)+': '+ans)
	caso+=1
	t-=1
