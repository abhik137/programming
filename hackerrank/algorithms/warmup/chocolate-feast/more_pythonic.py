# Enter your code here. Read input from STDIN. Print output to STDOUT
T = int(raw_input())
for i in range (0,T):
    A,B,C1 = [int(x) for x in raw_input().split(' ')]

    no_bought = A//B     # no of chocolates bought/no of wrappers
    x = C1
    total_wraps = no_bought
    answer = no_bought
    while total_wraps >= x:
        d = total_wraps/x
        answer += d
        # print answer
        wraps_left = 0
        if total_wraps % x != 0:
            wraps_left = total_wraps % x
        total_wraps = d+wraps_left % x
    print answer
