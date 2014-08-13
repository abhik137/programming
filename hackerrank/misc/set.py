n1 = raw_input()
e1 = set(raw_input().split())
n2 = raw_input()
e2 = set(raw_input().split())

d1 = e1.difference(e2)
d2 = e2.difference(e1)
#for reverse order: lis = sorted(list(d1.union(d2)), reverse=True)
lis = list(d1.union(d2))
lis = [int(x) for x in lis]
lis.sort()
for i in lis:
    print i

'''
refs:
    https://wiki.python.org/moin/HowTo/Sorting
    http://stackoverflow.com/questions/6593979/how-to-convert-a-set-to-a-list-in-python
    http://stackoverflow.com/questions/8616284/how-to-access-an-element-of-a-set-using-an-equivalent-object
    http://stackoverflow.com/questions/59825/how-to-retrieve-an-element-from-a-set-without-removing-it
    http://python.6.x6.nabble.com/Get-item-from-set-td1530758.html
'''