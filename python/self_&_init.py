
class A(object):
    """docstring for ClassName"""
    def __init__(self):
        self.x = 'Hello'

    def method_a(self, foo):
        print self.x + ' ' + foo


cl = A()        # so basically, constructors are default/fallback objects for a class?
print cl.x      # This would print 'Hello'


"""
... the self variable represents the instance of the object itself. Most object-oriented
languages pass this as a hidden parameter to the methods defined on an object; 
Python does not. You have to declare it explicitly. When you create an instance 
of the A class and call its methods, it will be passed automatically, as in ...
"""

a = A()               # We do not pass any argument to the __init__ method
a.method_a('Sailor!') # We only pass a single argument

"""
The __init__ method is roughly what represents a constructor in Python. When you call A()
Python creates an object for you, and passes it as the first parameter to the __init__ method.
Any additional parameters (e.g., A(24, 'Hello')) will also get passed as arguments--in this
case causing an exception to be raised, since the constructor isn't expecting them.
"""
# My $0.02: self defines the behavior of class when no params.(?) are passed to it during instantiation
# Q : Is self an object?

# ref 1: http://stackoverflow.com/questions/625083/python-init-and-self-what-do-they-do
# ref 2: http://stackoverflow.com/questions/2709821/python-self-explained
# ref 3: http://stackoverflow.com/questions/6019627/python-self-keyword