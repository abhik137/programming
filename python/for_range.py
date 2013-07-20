# http://wiki.python.org/moin/ForLoop

'''
for loops in python are more like foreach in php
rather than the traditional for loops as in C/Java
we use range()/xrange() as a solution to this problem.
However, it might not be a complete replacement for traditional for loop
so, do checkout 'enumerate()'
'''

for x in range(0, 3):                # runs from 0->2[0,1,2]
    print "We are on time %d" % (x)

# nested loop
for x in xrange(1, 11):
    for y in xrange(1, 11):
        print '%d * %d = %d' % (x, y, x*y)

# early exit
for x in xrange(3):
    if x == 1:
        break

# for...else
for x in xrange(3):
    print x
else:
    print 'Final x = %d' % (x)

# String as an iterable
string = "Hello World"
for x in string:
    print x

# Lists as an iterable
collection = ['hey', 5, 'd']
for x in collection:
    print x

# list of Lists
list_of_lists = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
for list in list_of_lists:
    for x in list:
        print x

'''#######-Everything Below This needs Review-#######'''


# Creating your own iterable
class Iterable(object):

    def __init__(self, values):
        self.values = values
        self.location = 0

    def __iter__(self):
        return self

    def next(self):
        if self.location == len(self.values):
            raise StopIteration
        value = self.values[self.location]
        self.location += 1
        return value

'''
Difference between range() and xrange():
"Resource Usage", range() generates a list of numbers at once
xrange() generates it as required
can be significant when range is large
'''

# range vs xrange
import time

    #use time.time() on Linux

start = time.clock()
for x in range(10000000):
    pass
stop = time.clock()

print stop - start

start = time.clock()
for x in xrange(10000000):
    pass
stop = time.clock()

print stop - start


# Time on small ranges
import time

    #use time.time() on Linux

start = time.clock()

for x in range(1000):
    pass
stop = time.clock()

print stop-start

start = time.clock()
for x in xrange(1000):
    pass
stop = time.clock()

print stop-start


# Your own range generator using yield
def my_range(start, end, step):
    while start <= end:
        yield start
        start += step

for x in my_range(1, 10, 0.5):
    print x
