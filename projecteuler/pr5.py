# Smallest Multiple

i = 1
for k in xrange(1, 21):
    if i % k > 0:
        for j in xrange(1, 21):
            if (i*j) % k == 0:
                i *= j
                break
print i

# ref: http://mathforum.org/library/drmath/view/62527.html
