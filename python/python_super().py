# ref: http://stackoverflow.com/questions/576169/understanding-python-super-and-init-methods
# ref: http://stackoverflow.com/questions/222877/how-to-use-super-in-python

class Base(object):
    def __init__(self):
        print "Base created"

class ChildA(Base):
    def __init__(self):
        Base.__init__(self)

class ChildB(Base):
    def __init__(self):
        super(ChildB, self).__init__()

print ChildA()#,ChildB()
print ChildB()
