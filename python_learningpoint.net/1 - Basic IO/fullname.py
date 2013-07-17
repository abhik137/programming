import sys

print "Hi, enter your first, second and age, separated by a space."

[first_name,second_name,age] = sys.stdin.readline().rstrip().split(' ')#seems to be some sort of associative array

print "First Name: " + first_name.rstrip()
print "Second Name: " + second_name.rstrip()
print "Age:"
print int(age)
print "Next year, this time your age will be:"
print int(age)+1


