n = int(raw_input())
a=0
b=1
lis=[0,1]
for i in range(n-2):
    sum = lambda a,b: b+a
    temp = b
    b = sum(a,b)
    a = temp
    lis.append(b)

print list(map(lis[i]**3,lis))
