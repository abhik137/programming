# Problem 4: Largest Palindrome Product

def Palindrome(s):
    if s == s[::-1]:                    # slicing [begin:end:step] used to reverse a string here
        return True
    else:
        return False

greatest=0
for a in xrange(999, 100, -1):          # xrange(start, stop[, step])
    for b in xrange(a, 100, -1):
        product = a*b
        if product > greatest:
            s = str(a * b)
            if Palindrome(s):           # function must be defined before it is called
                greatest = a*b
print greatest

'''
references:
    http://docs.python.org/2/library/functions.html#xrange
'''