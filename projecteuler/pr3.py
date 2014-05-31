# problem 3: Largest Prime Factor

b=600851475143
n = 71
a=317584931803
i=3
while i*i<n:            # note that 'n' is changing here
    while n % i == 0:
        n = n/i
    i+=2

print n
'''
it is true that every composite number has a(not all) prime factor less than or equal to its square root
but that is irrelevant for this problem
'''
#
'''
Every number (that is not prime) has atleast 2 prime factors
say n = a*b; m = sqrt(n)
If a<m => b>m, and vice-versa
Hence, to check for whether a num. is prime
We only need to check till sqrt(n)
'''
#
'''
Now use the similar(above) logic to this problem:
we want to find the largest prime factor
'''

