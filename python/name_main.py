# TODO: write some code for demo, although this is pretty simple stuff
# demo candidate: http://ibiblio.org/g2swap/byteofpython/read/module-name.html

"""
if the python interpreter is running that module (the source file) as the main program, 
it sets the special __name__ variable to have a value "__main__". 
If this file is being imported from another module, __name__ will be set to the module's name.
"""
'''
By doing the main check, you can have that code only execute when 
you want to run the module as a program and not have it execute when someone just
 wants to import your module and call your functions themselves.
'''
# ref: http://stackoverflow.com/questions/419163/what-does-if-name-main-do
# ref: http://effbot.org/pyfaq/tutor-what-is-if-name-main-for.htm