import re

n = int(raw_input())
for i in xrange(n):
    num = raw_input()
    match = re.search(r'^[7-9]\d\d\d\d\d\d\d\d\d$', num)
    if match:
        print "YES"
    else:
        print "NO"