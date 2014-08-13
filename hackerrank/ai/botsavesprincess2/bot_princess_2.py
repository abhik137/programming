#!/bin/python

# https://www.hackerrank.com/challenges/saveprincess2
def nextMove(n,r,c,grid):
    for i in xrange(0,n):
        if grid[i].find('p') != -1:
            pr_x = grid[i].find('p')
            pr_y = i
    bot_x=c
    bot_y=r
    diff_x = pr_x - bot_x
    diff_y = pr_y - bot_y
    if abs(diff_x) > abs(diff_y):   # to eliminate the '0' diff case in one of the axes
        #move left or right
        if diff_x < 0:
            print "LEFT"
        else:
            print "RIGHT"
    else:
        #move up or down
        if diff_y < 0:
            print "UP"
        else:
            print "DOWN"
    return ""
n = input()
r,c = [int(i) for i in raw_input().strip().split()]
grid = []
for i in xrange(0, n):
    grid.append(raw_input())

print nextMove(n,r,c,grid)
