#!/bin/python

# https://www.hackerrank.com/challenges/saveprincess
def displayPathtoPrincess(n,grid):
    for i in xrange(0,n):
        if grid[i].find('p') != -1:
            pr_x = grid[i].find('p')
            pr_y = i
            #print pr_x, pr_y
        if grid[i].find('m') != -1:
            bot_x = grid[i].find('m')
            bot_y = i
            #print bot_x, bot_y
    diff_x = -(bot_x-pr_x)
    #print diff_x
    diff_y = -(bot_y-pr_y)
    #print diff_y
    if (diff_x < 0):
        for j in xrange(0,abs(diff_x)):
            print "LEFT"
    else:
        for j in xrange(0,abs(diff_x)):
            print "RIGHT"
    if (diff_y < 0):
        for j in xrange(0,abs(diff_y)):
            print "UP"
    else:
        for j in xrange(0,abs(diff_y)):
            print "DOWN"
#print all the moves here
m = input()
#print m
grid = []
for i in xrange(0, m):
    grid.append(raw_input().strip())
 #   print grid

displayPathtoPrincess(m,grid)
