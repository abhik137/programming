N, T = [int(x) for x in raw_input().split()]
width = [int(x) for x in raw_input().split()]
for i in xrange(T):
    i, j = [int(x) for x in raw_input().split()]
    maximum = 3
    for x in range(i, j+1):
        if width[x] < maximum:
            maximum = width[x]
    print maximum

# link: https://www.hackerrank.com/challenges/service-lane