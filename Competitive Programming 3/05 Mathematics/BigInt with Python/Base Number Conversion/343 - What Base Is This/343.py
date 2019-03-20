cs="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"	#convierte un int o BigInt a cualquier base
def convb(n,b):   
   if n<b:return cs[n]
   else:return convb(n//b,b)+cs[n%b]

while True:
	try:
		ans=[-1,-1]		
		a,b=map(str,input().split())
		#copya=sorted(a,reverse=True)
		#copyb=sorted(b,reverse=True)
		maxa=max(a)
		maxb=max(b)
		basea=cs.index(maxa)+1
		baseb=cs.index(maxb)+1	
		esta=False
		for i in range(max(basea,2),37):
			if esta==True:break
			numa=int(a,i)
			for j in range(max(baseb,2),37):				
				numb=int(b,j)		
				if numa==numb:
					ans[0]=i
					ans[1]=j
					esta=True
					break
		if ans[0]!=-1:
			print("%s (base %d) = %s (base %d)"%(a,ans[0],b,ans[1]))
		else:print("%s is not equal to %s in any base 2..36"%(a,b))			
	except EOFError:
		break


