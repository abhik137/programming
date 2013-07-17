# In this example, we learn how to create a Dictionary (HashTable), add key-value pairs to it, delete records from it, clear it and delete it.

#Python dictionaries are Hash Tables
#Here, let us create a small telephone number directory where the keys are the names of people

#General syntax for initializing a dictionary

phone_directory = {"Ankit":"123-56789", "Alex":"567-89010", "Nina":"345-678910"} #this too looks like associative array-->| http://forums.udacity.com/questions/6009655/dictionary-vs-associative-arrays |

# Accessing values in the Dictionary
print "***\nDisplaying the values in the phone directory"
print "Ankit's telephone number", phone_directory["Ankit"]
print "Alex's telephone number", phone_directory["Alex"]
print "Nina's telephone number", phone_directory["Nina"]

#Changing and updating values in the Dictionary
#As an e.g., let's change Ankit's phone number
print "***\nNow updating Ankit's phone number to 321 12345"
phone_directory["Ankit"]="321-12345"
#Now let's print it to see the change
print phone_directory

#Removing/deleting dictionary elements
#Let's say, we'd like to remove Alex's phone number
del phone_directory["Alex"]
#No record of Alex on printing this
print phone_directory

#clearing the dictionary
phone_directory.clear()
#All records will be wiped out from it
print phone_directory
#no key-value pairs left to display

#Deleting the dictionary
del phone_directory

#once deleted, you can't update, access or display it