# In this example, we will create strings, accept strings as input, use indexing, slicing, replicating and splitting of strings.

import sys

# Here is a string constant which we will create
greeting_statement = "Welcome to strings in python"

#ask name from user
print "plz tell us ur name"

#read name from STDIN
#rstrip to eliminate \n at the end
input_name=sys.stdin.readline().rstrip()
#now display the user a customized greeting with his name
print "Demonstrating Concatenation"
print greeting_statement + "," + input_name + "!"

# Now, use the multiplication operator to repeat the string 5 times
print "Demonstrating Replication"
print greeting_statement * 5

# Now, we demonstrate Indexing and  Slicing of strings
#x[0] is the first character of the string
#x[1] is the second string
#x[-1] is the last char 
#x[-2] is the second-to-last char
#x[1:3] will display the substring of x, from character at index 1 to character at index 3

# Demonstrate Indexes and Slicing of Strings, creating substrings

# Original greeting statement
print "Original greeting_statement " + greeting_statement

#first char of greeting statement
print "greeting_statement[0]: (first char of greeting statement) "+greeting_statement[0]

#fourth char of greeting statement
print "greeting_statement[3]: (fourth char of greeting statement) "+greeting_statement[3]

#last char
print "greeting_statement[-1]: (last char) "+greeting_statement[-1]

#third-last char
print "greeting_statement[-3]: (third-last char) "+greeting_statement[-3]

# Displays the string from Index 1 to 4
print "greeting_statement[1:4]: (Displays the string from Index 1 to 4) " + greeting_statement[1:4]

# Displays the sub string from first character till index 2 (ie, third character)
print "greeting_statement[:2]: (Displays the string from first character till index 2 (ie, third character)::" + greeting_statement[:2]

# Displays the sub string from index =2  till the end
print "greeting_statement[2:]: (Displays the sub string from index =2  till the end)::" + greeting_statement[2:]

# Displays the length of the string
print "Length of greeting_statement :" + str(len(greeting_statement))

# Splits the string into words, by splitting the string wherever there is a space
print "Splitting the greeting_string into words using split"
print greeting_statement.split(' ')