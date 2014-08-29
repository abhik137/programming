#!/usr/bin/env python
def palindrome():
    t = int(raw_input())
    alph = "abcdefghijklmnopqrstuvwxyz"
    # dict = {i:0 for i in alph}
    dict = {}

    for x in xrange(len(alph)):
        dict[alph[x]]= x+1

    # print dict
    for i in xrange(t):
        str = raw_input()
        count = 0
        for i in xrange(len(str)):
            diff = abs(dict[str[i]] - dict[str[len(str)-i-1]])
            # print str[i], str[len(str)-i-1], dict[str[i]], dict[str[len(str)-i-1]]
            count += diff
            if len(str) % 2 == 0 and i > len(str)/2 - 2:
                # print "%d ." % i
                break
            elif len(str) % 2 != 0 and i > len(str)/2 - 1:
                # print "%d ." % i
                break
        print count
            

if __name__ == '__main__':
    palindrome()

# https://www.hackerrank.com/challenges/the-love-letter-mystery