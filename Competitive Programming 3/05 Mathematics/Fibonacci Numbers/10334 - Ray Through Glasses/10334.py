a = range(1010)
f = [0,1]
for i in range(1010):
    f.append(i)
for i in range(2,1010):
    f[i]=f[i-1]+f[i-2]
    
while(0 or 1):    
    try:
        n = int(input())
        print(f[n+2])       
    except EOFError:
        break
