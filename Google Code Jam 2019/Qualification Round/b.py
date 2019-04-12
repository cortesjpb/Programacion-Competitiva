t=int(input())
caso=1
while t:
	n=int(input())
	s=str(input())
	ans=''
	for c in s:
		if c=='E':ans+='S'
		else:ans+='E'		
	print('Case #'+str(caso)+': '+ans)
	caso+=1
	t-=1
