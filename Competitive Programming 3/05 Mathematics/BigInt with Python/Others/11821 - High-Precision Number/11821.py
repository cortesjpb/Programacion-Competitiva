from decimal import *
import sys
getcontext().prec=35
t=int(input())
for _ in range(t):
	lista=[]	
	num=str(input())
	while num.strip()!="0":		
		lista.append(Decimal(num))
		num=str(input())
	ans=sum(lista)
	ans=format(ans,".33f")	
	resto=Decimal(str(Decimal(ans)-int(Decimal(ans))))	
	if(resto==Decimal('0.0')):print(int(Decimal(ans)))
	else:print(str(ans).rstrip('0'))
