t = int(raw_input())
for i in xrange(t):
    k = int(raw_input())
    a = k/2
    if k%2 != 0:
        b = k/2+1
    else:
        b = k/2
    print a*b

# https://www.hackerrank.com/challenges/halloween-party