while True:
	try:
		n,a=map(int,input().split())
		ans=0
		for i in range(1,n+1):
			ans= ans+(i*(a**i))
		print(ans)
	except EOFError:
		break
