#Declaring variables in Python and exploring its dynamic structure

#Std. datatypes in python--> Strings, List, Tuples, Dictionaries, Mutablility
from types import*
import math

#You dont't need to specify the type of x in advance
#Detecting the type happens in real time, at run time
#This creates flexibility for the coder
# This also means that some semantic checking cannot be done at compile time??
#And this might lead to unexpected results or errors at Run Time??

def guess_type(x):
    if type(x) == IntType:
        print "Value passed in: " + `x`
        print "A Number was passed in "
    else:
        print "something else was passed in"

radius = 10;
name_of_shape = "Circle"

print "Area of " + name_of_shape + "=" + repr(2*math.pi*radius*radius)
print "Variable radius is passed into guess_type: "
guess_type(radius)
print "Variable name_of_shape is passed into guess_type: "
guess_type(name_of_shape)

