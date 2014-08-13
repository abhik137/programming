#!/usr/bin/python
def next_move(posr, posc, board):
    bot_x = posc    # actually this is x, but..
    bot_y = posr    # actually this is y, but..
    dirtyCells = [] # list of all cells in the grid that are dirty
    for i in xrange(5):
        for j in xrange(5):
            if board[j][i] == 'd':
                dirtyCells.append((i,j))
#    print bot_x, bot_y
#    print dirtyCells
    # find closest dirty cell
    min_dist = 9 # the maximum possible value of minimum distance
    for x in xrange(len(dirtyCells)):   # calculating distance for each 'd' cell and finding the minimum
        dirt = dirtyCells[x]
        dist_x = bot_x-dirt[0] if bot_x>dirt[0] else dirt[0]-bot_x  # across columns
        dist_y = bot_y-dirt[1] if bot_y>dirt[1] else dirt[1]-bot_y  # across rows
        dist = dist_x+dist_y
#        print dirt, dist_x, dist_y
        if dist < min_dist:
            min_x = x
            min_dist = dist
#            print dirtyCells[x],"**",min_dist, min_x

    target_x = dirtyCells[min_x][0]
    target_y = dirtyCells[min_x][1]
    if bot_x == target_x and bot_y == target_y:
        print "CLEAN"
    elif bot_x > target_x:
        print "LEFT"
    elif bot_y > target_y:
        print "UP"
    elif bot_x < target_x:
        print "RIGHT"
    else:
        print "DOWN"

if __name__ == "__main__":
    pos = [int(i) for i in raw_input().strip().split()]
    board = [[j for j in raw_input().strip()] for i in range(5)]
    next_move(pos[0], pos[1], board)

# [Enumerate] http://stackoverflow.com/questions/10777271/python-using-enumerate-inside-list-comprehension
# http://stackoverflow.com/questions/952914/making-a-flat-list-out-of-list-of-lists-in-python