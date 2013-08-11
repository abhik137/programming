# problem 3: Largest Prime Factor

n=600851475143
a=317584931803
i=2
while i*i<n:
    while n % i == 0:
        n = n/i
    i+=1

print n
'''
it is true that every composite number has a(not all) prime factor less than or equal to its square root
but that's irrelevant for this problem
'''