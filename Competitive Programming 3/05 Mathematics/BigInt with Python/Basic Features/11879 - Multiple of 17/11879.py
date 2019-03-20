while True:	
	n=int(input())
	if n==0: break
	last=n%10
	num=n//10		
	if (num-(last*5))%17==0:print(1)
	else:print(0)

