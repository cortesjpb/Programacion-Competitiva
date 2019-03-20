n=int(input())
for _ in range(n):
	a,b=map(str,input().split())
	uno=a[::-1]
	dos=b[::-1]
	tres=int(uno)+int(dos)
	tres=str(tres)[::-1]
	print(tres.strip('0'))
