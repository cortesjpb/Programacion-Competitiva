import sys
fb=[0]*1005
fb[1]=1
fb[2]=2
for i in range(3,1005):
	fb[i]=fb[i-2]+fb[i-1]

sys.stdin=open("entrada.txt","r")
#sys.stdout=open("salida.txt",'w')
caso=0
while True:
	a=str(input())
	b=str(input())
	salir=0
	try:
		a=str(input())
		b=str(input())
		c=str(input())		
	except EOFError:		
		salir=1
	a=a[::-1]
	b=b[::-1]
	if caso>0:
		print()
	resa=0
	for i in range(len(a)):
		resa+=fb[i+1] if a[i]=='1' else 0
	resb=0
	for i in range(len(b)):
		resb+=fb[i+1] if b[i]=='1' else 0
	total=resa+resb
	#print(total, "---")
	if(total==0):
		print(0)
		caso+=1
		continue
	listans=[]
	for i in range(1000,-1,-1):
		if total-fb[i]>=0:
			listans.append(i)
			total-=fb[i]
			i-=1
	ans=['0']*listans[0]
	for c in listans:
		ans[c-1]='1'
	ans=ans[::-1]		
	print("%s"%(str(''.join(ans))))
	caso+=1
	if salir==1:break
	
