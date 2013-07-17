#!/usr/bin/python


class Employee:
    'Common base class for all employees'
    empCount = 0
    tpc = 0

    def __init__(self, name, salary):         # class parameters defined
        self.name = name
        self.salary = salary
        Employee.empCount += 1

    def displayCount(self):
        print "Total Employee %d" % Employee.empCount

    def displayEmployee(self):
        Employee.tpc += 1
        print "Name : ", self.name,  ", Salary: ", self.salary

print "Total Employee %d" % Employee.empCount   # 0

"This would create first object of Employee class"
emp1 = Employee("Zara", 2000)

print "Total Employee %d" % Employee.empCount   # 1

"This would create second object of Employee class"
emp2 = Employee("Manni", 5000)

emp1.displayEmployee()

print Employee.tpc   # 0

emp2.displayEmployee()

print "Total Employee %d" % Employee.empCount   # note that 'empCount' behaves as 'Global Variable'
                                                # wrong reason:since it is defined under __init__
print Employee.tpc   # 2      # even 'tpc' acts as Global, possibly because it is ref. by 'classname--> Employee' instead of object name

# class attributes demonstration
print "Employee.__doc__:", Employee.__doc__
print "Employee.__name__:", Employee.__name__
print "Employee.__module__:", Employee.__module__
print "Employee.__bases__:", Employee.__bases__
print "Employee.__dict__:", Employee.__dict__

# You can add, remove, or modify attributes of classes and objects at any time:
emp1.age = 7  # Add an 'age' attribute.
emp1.age = 8  # Modify 'age' attribute.
#del emp1.age  # Delete 'age' attribute.

# alternate ways to access attributes
hasattr(emp1, 'age')       # Returns true if 'age' attribute exists
getattr(emp1, 'age')       # Returns value of 'age' attribute
setattr(emp1, 'age', 8)    # Set attribute 'age' at 8
delattr(emp1, 'age')       # Delete attribute 'age'
