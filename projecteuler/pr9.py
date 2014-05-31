# ref(for max. efficiency): Euclid's Formula
# https://en.wikipedia.org/wiki/Pythagorean_triple#Generating_a_triple
for a in xrange(1,500):
    for b in xrange(1,500):
        for c in xrange(1,500):
            if a**2+b**2==c**2 and a+b+c==1000:
                pr=a*b*c
        
print pr
# ^This took 33.1s, improve it!
for a in xrange(1,500):
    for b in xrange(a+1,500):
        for c in xrange(b+1,500):
            if a**2+b**2==c**2 and a+b+c==1000:
                pr=a*b*c
        
print pr
# ^This took 5.6s (Pythagorean Triples are in increasing order)