def check_divisibility(digit, num):
    if digit==0 :
        return 0
    elif (num % digit == 0):
        return 1
    else:
        return 0

t = int(raw_input())
for i in xrange(t):
    raw_num = int(raw_input())
    num = raw_num
    count = 0
    while num>0:
        digit = num % 10
        if check_divisibility(digit, raw_num):
            count+=1
        num /= 10
    print count

# link: https://www.hackerrank.com/challenges/find-digits