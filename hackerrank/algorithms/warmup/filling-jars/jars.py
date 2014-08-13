#!/usr/bin/python
inp = raw_input().split()   # getting EOF error in using input() |http://stackoverflow.com/questions/5074225/python-unexpected-eof-while-parsing
N = int(inp[0])
M = int(inp[1])
total = 0
for i in xrange(M):
    a, b, k=[int(x) for x in raw_input().split()]
    total += (b-a+1)*k

print total/N