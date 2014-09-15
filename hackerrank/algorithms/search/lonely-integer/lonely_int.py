#!/usr/bin/py
def lonelyinteger(a):
    a.sort()    # to bring all pairs together
    answer = None
    for i in range(0,len(a)-1,2):
        # print a[i], a[i+1]
        if a[i] != a[i+1]:
            answer = a[i]
            break   # this is imp. otherwise in case of 1st number being loner, if condition will be always valid

    if(answer == None):
        answer = a[len(a)-1]    # If the last number is the loner
    return answer

if __name__ == '__main__':
    a = input()
    b = map(int, raw_input().strip().split(" "))
    print lonelyinteger(b)

# https://www.hackerrank.com/challenges/lonely-integer