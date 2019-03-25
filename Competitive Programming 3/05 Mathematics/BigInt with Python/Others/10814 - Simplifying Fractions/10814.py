import math
t=int(input())
for _ in range(t):
	a,c,b=map(str,input().split())
	maxi=math.gcd(int(a),int(b))
	print(int(a)//maxi,'/',int(b)//maxi)
