# Abstract Classes

When we assign a function as *virtual* we are requiring subclasses to override this method.
Sometimes base classes make no sense itself, they are constructed only to serve as base to other concrete classes. 
So we can write it as an abstract class, it means this class has at least one pure virtual method and cannot be instantiated. 
To be pure virtual, the virtual method has no definition, instead it comes with '= 0';

In the example below, Animal is an abstract class. It has the makeSound function that is pure virtual, it has no definition. 
It is required to be defined on the subclasses definition. This type of class is also called *Interfaces*. 

```
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

	protected:
		std::string _type;

	public:
		Animal(std::string type);
		virtual ~Animal();
		
		std::string getType() const;

		virtual void makeSound() const = 0;

};


#endif

```

```
#include "../inc/Animal.hpp"

using namespace std;


Animal::Animal(std::string type) : _type(type) { cout << "Animal constructor" << endl; }
Animal::~Animal(){ cout << "Animal destructor" << endl; }


std::string Animal::getType() const {
	return _type;
}

```


# References:
[abstract classes](https://en.cppreference.com/w/cpp/language/abstract_class)  
[interfaces](https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm)  
