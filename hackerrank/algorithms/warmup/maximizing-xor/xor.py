#!/bin/python
# Complete the function below.

def  maxXor(l, r):
    maxv = 0
    for i in xrange(l, r+1):
        for j in xrange(l, r+1):
            xor_val = i ^ j
            if xor_val > maxv:
                maxv = xor_val
    return maxv
    

_l = int(raw_input());
_r = int(raw_input());

res = maxXor(_l, _r);
print(res)

# https://www.hackerrank.com/challenges/maximizing-xor