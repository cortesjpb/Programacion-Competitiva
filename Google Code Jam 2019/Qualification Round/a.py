t=int(input())
caso=1
while t:
	s=str(input())
	ss=s[::-1]	
	n=len(s)
	ansl=[]
	for i in range(n):
		if ss[i]=='4':ansl.append(i)
	ans=0	
	for a in ansl:		
		ans+=(10**a)
	print('Case #'+str(caso)+': '+str((int(s)-ans))+' '+str(ans))	
	caso+=1	
	t-=1
