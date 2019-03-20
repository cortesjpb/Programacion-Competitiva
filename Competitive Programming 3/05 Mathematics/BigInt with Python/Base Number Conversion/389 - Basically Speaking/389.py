cs="0123456789ABCDEF"
def convb(n,b):   
   if n<b:return cs[n]
   else:return convb(n//b,b)+cs[n%b]

while True:
	try:
		s,a,b=map(str,input().split())
		num=int(s,int(a))
		if b=="10":
			ans=str(num)
		else:
			ans=str(convb(num,int(b)))
		if len(ans)>7:print('  ERROR')
		else:print("%7s"%ans)
	except EOFError:
		break
