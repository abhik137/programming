n = int(raw_input())
#l = [raw_input() for i in range(n)]
#print l
assert n<=100 and n>=1
a=set(raw_input())
for _ in xrange(n-1):
    b = set(raw_input())
    a = a.intersection(b)
print len(a)
