# Problem 4: Largest Palindrome Product

def Palindrome(s):
    if s == s[::-1]:                    # slicing [begin:end:step] used to reverse a string here
        return True                     # begin&end => actual pos in the array
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
    http://stackoverflow.com/questions/931092/reverse-a-string-in-python
    http://docs.python.org/release/2.3.5/whatsnew/section-slices.html
    http://stackoverflow.com/questions/509211/the-python-slice-notation
'''