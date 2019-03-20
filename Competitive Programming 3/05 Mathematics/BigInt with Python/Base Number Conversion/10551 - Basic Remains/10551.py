def toStr(n,base):
   cs = "0123456789ABCDEF"
   if n < base:return cs[n]
   else:return toStr(n//base,base) + cs[n%base]

while True:
	try:
		b,p,m=map(str,input().split())
		b=int(b)
		p=int(p,b)	
		m=int(m,b)
		ans=toStr(p%m,b)
		print(ans)
	except:
		break
