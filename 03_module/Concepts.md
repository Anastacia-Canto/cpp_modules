# Access Modifiers

Access modifiers is the mechanism that determine the scope of free access to members of a class.
There are three types: private, public and protected. If not explicitly determined, by default the members will be treated as private.

- Public: public members can be accessed from anywhere in the program, inside and outside class definition.
- Private: private members can only be accessed by member function inside the class or by friend functions or friend class. They cannot be accessed directly from the outside of the class.
We need getters and setters to access these members publicly.
- Protected: It is similar to private members, with the difference that protecteed members can be accessed also by subclasses.

# Mode on inheritance

The access modifiers are equaly important when inheriting from a class. The final access modifier of inherited members depends on the mode of inheritance.

- Public inheritance: public members become public on the subclasses, and protected members continue to be protected.
- Protected inheritance: public members become protected on the subclasses.
- Private inheritance: public and protected members become private.

The default mode, if no one is specified, is the private inheritance.

**Note:** the members can become less accessible, never the opposite. 



# References:
[access modifier](https://www.geeksforgeeks.org/access-modifiers-in-c/)  
[inheritance](https://www.geeksforgeeks.org/inheritance-in-c/#Modes%20of%20Inheritance)  
