from math import sqrt

limit = 2000000
a=[True]*limit
a[0] = a[1] =False

# for i in xrange(limit):
#     a.append(i)
sq=int(sqrt(limit))
#print sq
for i in xrange(2, sq):
    if a[i] == True:
        for j in xrange(i*i, limit, i):
            a[j] = False

sum = 0
for x in xrange(limit):
    if a[x]==True:
        sum = sum+x
        # print x

print sum

# http://stackoverflow.com/questions/3939660/sieve-of-eratosthenes-finding-primes-python
# http://en.wikipedia.org/wiki/Sieve_of_Eratosthenes#Implementation
# http://codereview.stackexchange.com/questions/42420/sieve-of-eratosthenes-python [optimization]

# http://rosettacode.org/wiki/Sieve_of_Eratosthenes#Python
# http://stackoverflow.com/questions/2068372/fastest-way-to-list-all-primes-below-n-in-python
# https://proofwiki.org/wiki/Sieve_of_Eratosthenes

## https://proofwiki.org/wiki/Composite_Number_has_Prime_Factor_not_Greater_Than_its_Square_Root [*most important prime theorem?]