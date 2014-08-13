#!/usr/bin/python
# note that the problem doesn't require you to save state, just print the next move
def next_move(posr, posc, board):
    flag = 0
    #print board[0][4]
    #a = board[i].index('d')     # find is defined on string objects. index is defined on list objects
    transpose = zip(*board)     # short-cut for transpose
    #b = [[j for j in board[i][j]] for i in board[i]]
    '''
    b= [['-' for x in xrange(5)] for x in xrange(5)] #initialize first| http://stackoverflow.com/questions/6667201/how-to-define-two-dimensional-array-in-python
    for i in xrange(5):
        for j in xrange(5):
            b[j][i]=board[i][j]
    '''
    indices = []
    for j in xrange(5):     # find all the 'd' boxes
        indices.append([(i,j) for i, x in enumerate(board[j]) if x == 'd'])

    while(True):
        d_c=6
        d_r=6
        if board[posr][posc] == 'd':
            print "CLEAN"
            break;
            '''
            if any(item=='d' for item in board[i]):
                d_r = board[i].index('d')
                if d_r < posr:
                    print "LEFT"
                else:
                    print "RIGHT"
                break;
            
            if any(item=='d' for item in transpose[j]):
                d_c = transpose[j].index('d')
                if d_c < posc:
                    print "UP"
                else:
                    print "DOWN"
                break;
            '''
        elif any(item=='d' for item in board[posr]) or any(item=='d' for item in transpose[posc]):
            try:
                d_c = board[posr].index('d')
            except ValueError:
                #print d_r
                pass
            try:
                d_r = transpose[posc].index('d')
            except ValueError:
                #print d_c
                pass
            if (d_c!=6 or d_r!=6) and abs(d_r > d_c) and (posr<4 and posc<4):
                if d_r <= posr:
                    print "LEFT"
                else:
                    #print "HERE"
                    print "RIGHT"
                break
            elif (d_c!=6 or d_r!=6) and abs(d_r <= d_c):
                if d_c <= posc:
                    print "UP"
                else:
                    print "DOWN"
                break
            else:
                #print "check"
                #print (d_c!=None and d_r!=None) and abs(d_r < d_c)
                if (posr<4 and posc<4):
                    if flag==0:
                        print "RIGHT"
                        flag=1
                        break
                    else:
                        print "DOWN"
                        flag=0
                        break
                elif posc>=4:
                    print "LEFT"
                    break
                elif posr>=4:
                    print "UP"
                    break
        else:
            if (posr<4 and posc<4):
                if flag==0:
                    print "RIGHT"
                    flag=1
                    break
                else:
                    print "DOWN"
                    flag=0
                    break
            elif posc>=4:
                print "LEFT"
                break
            elif posr>=4:
                print "UP"
                break
            


if __name__ == "__main__":
    pos = [int(i) for i in raw_input().strip().split()]
    board = [[j for j in raw_input().strip()] for i in range(5)]
    next_move(pos[0], pos[1], board)

# https://bradmontgomery.net/blog/2013/04/01/pythons-zip-map-and-lambda/
# http://stackoverflow.com/questions/3865640/understanding-zip-function
# http://stackoverflow.com/questions/4937491/matrix-transpose-in-python
# https://github.com/andrewrk/hackerrank
# https://github.com/irainy/hackerRank/blob/master/botclean.c
# http://blog.singhanuvrat.com/problems/hackerrank-botclean
# http://stackoverflow.com/questions/13054057/confused-with-python-lists-are-they-or-are-they-not-iterators
# http://azitech.wordpress.com/2011/07/06/pythons-enumerate-function/
# http://stackoverflow.com/questions/6294179/how-to-find-all-occurrences-of-an-element-in-a-list

# http://pastebin.com/hptTnMz6
# http://hrank.io/challenges/botclean/forum/questions/1265
# http://stackoverflow.com/questions/2053492/how-do-i-determine-if-an-element-is-in-a-list
# http://stackoverflow.com/questions/4450752/python-find-out-that-a-list-does-not-have-specific-item
# http://stackoverflow.com/questions/3289601/null-object-in-python