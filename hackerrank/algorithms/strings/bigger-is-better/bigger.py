#!/usr/bin/py
# https://www.hackerrank.com/challenges/bigger-is-greater
t = int(raw_input())
for x in xrange(t):
    s = list(raw_input())
    orig_s = str(s)
    target_i = None
    target_j = None
    for i in xrange(len(s)-1):
        if s[i]<s[i+1]:
            target_i = i
    if target_i == None:
        print "no answer"
    else:    
        for j in xrange(len(s)):
            if s[target_i] < s[j]:
                target_j = j
        temp = s[target_i]
        s[target_i] = s[target_j]
        s[target_j] = temp
        # s[(target_i+1): len(s)] = s[(target_i+1): len(s)].sort()
        s[target_i+1: len(s)] = sorted(s[target_i+1: len(s)])
        s = "".join(s)
        print s

#ref: https://stackoverflow.com/questions/2272819/python-sort-a-part-of-a-list-in-place        