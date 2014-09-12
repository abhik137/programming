t = int(raw_input())

for i in xrange(t):
    n = int(raw_input())
    x = y = 0
    found = False
    while 5*y <= n:
        if (n - 5*y) % 3 == 0:
            x = (n - 5 * y) / 3     # 3x+5y=n, where x is the no. of 5s/3 and y the no. of 3s/5
            found = True
            # print x, y
            break
        y += 1
    if found == True:
        print '5'*x*3 + '3'*y*5
    else:
        print "-1"
# link: https://www.hackerrank.com/challenges/sherlock-and-the-beast