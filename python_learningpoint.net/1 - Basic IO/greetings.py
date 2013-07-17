#accept the username as input and greet him a customised greeting

#Let's import the 'sys' module which will provide us with a way to read lines from STDIN
import sys

print "Hi, what's your name?"
name = sys.stdin.readline()     #read a line form STDIN
print "Hello "+name.rstrip() #strip the new line off from the end of the string
