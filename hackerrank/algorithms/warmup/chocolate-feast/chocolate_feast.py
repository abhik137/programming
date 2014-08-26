t = int(raw_input())

for i in range(t):
    a = raw_input().split()
    a = [int(x) for x in a]
    no_bought = a[0]//a[1]     # no of chocolates bought/no of wrappers
    x = a[2]
    total_wraps = no_bought
    count = no_bought
    while total_wraps >= x:
        d = total_wraps/x
        count += d
        # print count
        wraps_left = 0
        if total_wraps % x != 0:
            wraps_left = total_wraps % x
        total_wraps = d+wraps_left % x
    print count

# link: https://www.hackerrank.com/challenges/chocolate-feast