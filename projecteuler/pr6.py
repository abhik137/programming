# Sum Square Difference
sm = 0
sum_of_sq = 0

for i in xrange(1,101):
    sum_of_sq += i*i

for j in xrange(1,101):
    sm += j

sq_of_sum = sm*sm
diff = (sq_of_sum - sum_of_sq)

print diff
# ref: http://www.ilovemaths.com/3sequence.asp
