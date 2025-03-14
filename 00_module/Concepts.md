# Basic concepts of C++

## Namespace
Namespaces are a tool for define scopes, in a way to avoid conflicts with entities with the same name. 
So everything that is defined inside a namespace belongs to that scope. Everything that is outside a namespace
belong to the global scope. 

The symbol :: is used to refer to which namespace an entity belongs. 
Example:
The C++ standard library is a namespace called std. So to use the entities cout or endl from this namespace is 
necessary to refer to this namespace.



```
#include <iostream>


int main() {

  std::cout << "Hello World!" << std::endl;

  return 0;
}
```

Alternatively we can import the namespace with *using* directive. In this case the symbol :: is not necessary.


```
#include <iostream> 
using namespace std;

int main() {

  cout << "Hello World!" << endl;

  return 0;
}
```

## Classes

A class is a user-defined type or data structure declared with the *class* keyword.
It can have data members, member functions and nested types. It is useful to determine which are the attributes of a class 
and define behavior. 

A definition of a class is like a model to create objects (instances of the class) following a specific defenition.
Constructor functions are used to create objects. When the object has no more use in a program it is eliminated using a
destructor function. 

When using memory allocation with *new* operator, they should be dealocated with *delete* operator.

```
#include <iostream>
#include <string>

using namespace std;

class Animal {

  private:
    std::string type;
    std::string sound;

  public:
    Animal(std::string type, std::string sound) {
      this->type = type;
      this->sound = sound;
    }

    ~Animal() {}

    std::string makeSound() { return sound; }

};

int main() {

  Animal cat("Cat", "meow");
  cout << cat.makeSound() << endl;

  Animal *dog = new Animal("dog", "ruff");
  cout << dog->makeSound() << endl;

  delete dog;

  return 0;
}

```

# Member initializer list
Data members of a class can be initialized using member initializer list. 
The values to be attributed become in parenthesis before the brace scope.

```
#include <iostream>
#include <string>

using namespace std;

class Animal {
  public:
  	std::string type;
  	std::string sound;

    // using initializer list
    Animal(std::string type, std::string sound) :  type(type), sound(sound) {}

    ~Animal() {}
};

int main() {

  Animal cat("Cat", "meow");
  cout << cat.type << endl;

  return 0;
}

```

# *static*

Inside a class, when a member is defined as *static* it means it is not bounded to class instances.
In other words, you can use this member without creating an instance of that class.

```
#include <iostream>
#include <string>


using namespace std;

class Animal {

	public: 

    Animal() {}

    ~Animal() {}

	static std::string example() { return "I am a static member."; }

};

int main() {

  cout << Animal::example() << endl;

  Animal dog();

  cout << dog.example() << endl; // -> does not compile!!

  return 0;
}

```

 # *const correctness*

 It is the use of *const* keyword to prevent *const* objects to be modified.
 Trying to change a value that was declared as *const* will produce a compile-time error. 
"The benefit of const correctness is that it prevents you from inadvertently modifying something you didn’t expect would be modified."
([link](https://isocpp.org/wiki/faq/const-correctness)).

When we declare a member function of a class as *const*, it means this function is an inspector, it cannot change anything on the object. It is usually applied to getters, for example.
So it guarantees that nothing related with the object will be changed inside that function.

```
#include <iostream>
#include <string>


using namespace std;

class Person {

	public:
		std::string name;

		Person(std::string name) : name(name) {}
		~Person(){}

		std::string getName() const { return name; }
};

int main() {

	Person person("Daniel");

	cout << person.getName() << endl;

	return 0;
}

```

 # References: 
 [namespaces](https://en.cppreference.com/w/cpp/language/namespace)  
 [classes](https://en.cppreference.com/w/cpp/language/classes)  
 [member initializer list](https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/)  
 [*static*](https://en.cppreference.com/w/cpp/language/static)  
[*const correctness*](https://isocpp.org/wiki/faq/const-correctness)
