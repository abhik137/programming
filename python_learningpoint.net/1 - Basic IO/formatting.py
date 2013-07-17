#In this example we will also learn how to format output. How to convert an entered string to its equivalent float value, how to display results till a specified number of decimal places, how to print numbers. We will accept an input length, convert it to its float equivalent. We will compute the area of a circle having that length as its radius. We will also compute the area of a square having that length as its side.

#import the value of pi
import math
from math import pi

import sys

print "Enter a valid length"
#input any length
input_length=sys.stdin.readline().rstrip()

#input is a string => we need to make a floating number out of it
r=float(input_length)

#calculate and display area of the circle
area_of_circle = pi*r*r

#the .2f is same as in C
print "Area of a circle with radius of %.2f units = %.2f square units" % (r,area_of_circle)

#Area of a square with side r
#Enclosing an integer of float variable name in reverse inverted commas is way of
#making a string out of it
area_of_square = r*r
print "Area of a square with length " + `r` + "units = " + `area_of_square` + " square units"	# `r` coverts r into a string object, `=grave accent character
#Alternate and preferred way, since ` has ben discarded in 3.0 upwards-->repr(x)-->
#|http://stackoverflow.com/questions/7784148/understanding-repr-function-in-python | http://stackoverflow.com/questions/12830676/python-accent-graves-bad-practice |
print "Area of a square with length " + repr(r) + "units = " + repr(area_of_square) + " square units"
#or use the str() function
print "Area of a square with length " + str(r) + "units = " + str(area_of_square) + " square units"

#Area of a n equilateral triangle with side r
#Another way of printing and formatting strings
#Use math.sqrt to find the square root
area_of_triangle = math.sqrt(3)*r*r/4
print "Area of triangle ", area_of_triangle
