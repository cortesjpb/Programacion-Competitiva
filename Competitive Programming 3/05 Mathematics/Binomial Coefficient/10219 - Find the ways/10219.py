while True:
	try:
		n,k=map(int,input().split())
		ans=1
		r = min(k, n - k)
		for i in range(1,r+1):        
			ans = ans*(n - r + i)
			ans = ans//i				
		print (len(str(ans)))
	except EOFError:
		break
