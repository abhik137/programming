fact = 1
for i in xrange(1,101):
    fact *= i

s = str(fact)
sm = 0
for x in s:
    sm = sm + int(x)
print sm