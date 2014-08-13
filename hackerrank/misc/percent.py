n = int(raw_input())
d = {}
for i in range(n):
    e = raw_input().split()
    #wrong!    d.append()
    d[e[0]]=[float(e[1]), float(e[2]), float(e[3])]

find = raw_input()
average = (d[find][0]+d[find][1]+d[find][2])/3

print "%.2f" % average

#ref: http://stackoverflow.com/questions/1024847/add-to-a-dictionary-in-python