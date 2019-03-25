t=int(input())
for _ in range(t):
	lista=[]	
	num=str(input())
	maxp=num.index('.')
	print(maxp)
	while(num!='0'):
		lista.append(Decimal(num))
		num=input()
	ans=0.0
	for a in lista:
		ans=ans+a
	print(ans)
