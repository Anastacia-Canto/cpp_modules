# Ad-hoc polymorphism

It is important to stabilish the difference between ad-hoc polymorphism and polymorphism. 

- ad-hoc polymorphism
It is the ability of a function to receive different types as parameters. The specific type is defined at compile-time.  
It is mechanism is based on method overloading, it means for each possible time is required a specific code.  
```
int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }

```

- polymorphism
It is the ability of a function to work with different types of objects based on inheritance or interface (important aspects of object-oriented programming).
In the example bellow, Dog and Cat are classes that inherit from Animal. They override the makeSound method from Animal definition.
So poly() as a function that receives a reference to Animal can be used for dog and cat objects.
In this case the specific implementation is defined at runtime. 
```
#include <iostream>

using namespace std;

class Animal {

	public: 
	Animal() {}
  // *virtual* keyword determines that the method should be overriden in the sub-classes
	virtual void makeSound() { cout << "Animal" << endl; }

};

class Dog : public Animal {
	public:
	Dog() : Animal() {}
	void makeSound() { cout << "ruff" << endl; }
};

class Cat : public Animal {
	public:
	Cat() : Animal() {}
	void makeSound() { cout << "meow" << endl; }
};

// this function receives any object that inherit from Animal
void poly(Animal & animal) {
  // without *virtual* keyword on Animal class, at runtime the method definition used would be from Animal and not from Cat or Dog, as the case
	animal.makeSound();
}

int main(){

	Dog dog = Dog();
	Cat cat = Cat();

	poly(dog);
	poly(cat);

	return 0;
}
```

Conclusion: "compile-time polymorphism is achieved by overloading functions and operators. Run-time polymorphism is accomplished by using inheritance and virtual functions"
[link](https://www.cplusoop.com/designing-reusable-code/module2/intro-ad-hoc-polymorphism.php)  

# Operator oerloading

In a way to use C++ operators pre-defined to built-in types with user-defined types, as classes, we need to overload them.  
It means, redefine them inside the class keeping the objective but adjusting to work with complex types. Operators overload are a compile-time polymorphism. 
In the example below, MyString class is overloading the '+' operator to directly concatenate a data member of type string. 
```
#include <iostream>
#include <string>

using namespace std;

class MyString {

	public:
		std::string str;

		MyString(std::string str) : str(str) {}
		
		std::string operator+(MyString & s) {
			return str + s.str;
		}

		MyString & operator=(MyString & s) {
			return *this;
		}
};

// the first parameter to stream operators are implicitly the object itself. So it should be defined as a free function, like here, or as a friend function
ostream & operator<<(ostream & o, MyString & s){
	o << s.str;
	return o;
}

int main(){

	MyString str1("Hello ");
	MyString str2("World");

	MyString str3 = str2;

	// concatenating
	cout << str1 + str2 << endl; // "Hello World"
	
	// printing as a built-in string
	cout << str1 << endl; // "Hello"

	// assigned
	cout << str3 << endl; // "World"

	return 0;
}
```

# Orthodox Canonical Class Form

An Orthodox Canonical Class Form is a class that has in its definition the following: 

- default constructor: a constructor with no parameters
- copy constructor: create a new instance as a mirror of a provided instance
- assignment operator: assign values to the instance based in another provided instance
- desctructor: delete the instance when it is no more needed

```
#include <iostream>
#include <string>

using namespace std;

class Cat {

	public:
		std::string name;

		// default constructor
		Cat(){}

		// constructor with parameter
		Cat(std::string name) : name(name) {}

		// copy constructor
		Cat(Cat & other) {
			*this = other;
		}

		//assignment operator
		Cat & operator=(Cat & other) {
			this->name = other.name;
			return *this;
		}

		// desctructor
		~Cat(){}
		
};



int main(){

	Cat cat1("Mimi");

	Cat cat2 = cat1;

	Cat cat3(cat2);

	cout << cat1.name << endl; // Mimi

	cout << cat2.name << endl; // Mimi

	cout << cat3.name << endl; // Mimi
	

	return 0;
}
```



# References:
[ad-hoc](https://www.cplusoop.com/designing-reusable-code/module2/intro-ad-hoc-polymorphism.php)  
[operator overload](https://www.geeksforgeeks.org/operator-overloading-cpp/)  

