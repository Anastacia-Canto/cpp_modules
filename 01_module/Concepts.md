# Memory Management

Other languages, like Java, have a specific mechanism to deal with dynamic allocation and deallocation. 
In C++ it should be done explicitly! To do that you should use **new** and **delete** operators.
While dynamic allocation enable some code flexibility, as cases when you have an array that you does not know the size until runtime, it demands responsability. 
Is very important to deallocate memory as soon as it content is not useful anymore. Deallocation can prevent memory leaks that make program use a large 
amount of memory, compromising performance. 
```
#include <iostream>
#include <string>

using namespace std;


int main() {

	
	int amount;

	cout << "How many persons do you wanna add to the list? " ;
	cin >> amount;

	std::string *ptr;

	// allocate memory according to 'amount' information provided by the user
	ptr = new std::string[amount];

	for (int i = 0; i < amount; i++) {
		cout << "Name " << (i + 1) << ": ";
		cin >> ptr[i];
	}

	cout << "This is your list:" << endl;
	for (int i = 0; i < amount; i++) {
		cout << ptr[i] << endl;
	}

	// deallocate memory
	delete[] ptr;
	ptr = nullptr; // to prevent dereference to this pointer

	return 0;
}

```

# Pointers to members

Beyond having pointers pointing to data or functions, we can have pointers pointing to members of a class or a data structure.

Pointers to data members: It is a pointer pointing to a data member of a class  
Pointers to funcions: It is a pointer pointing to a member function  
Pointers to objects: It is a pointer pointing to an object

```
#include <iostream>
#include <string>

using namespace std;

class Animal {

	public: 

		std::string name;

		Animal(std::string name) : name(name) {}

		std::string sayMyName() { return "My name is " + name; }

		std::string giveMeANickName(std::string nick) { return "My nickname is " + nick; }

};

int main(){


	Animal dog("Bud");

	// pointer to data member
	std::string Animal::*dataPtr = &Animal::name;

	cout << dog.*dataPtr << endl; // prints "Bud"


	// pointer to member function
	std::string (Animal::*funcPtr)(std::string) = &Animal::giveMeANickName;

	cout << (dog.*funcPtr)("Buddy") << endl; // prints "My nickname is Buddy"


	// pointer to Object
	Animal *objPtr = &dog;

	cout << objPtr->sayMyName() << endl; // prints "My name is Bud"

	return 0;
}

```

# Reference

References are alias to existing variables, becoming an alternative way to access that variable.  
In the example bellow, numRef and num are different access to the same memory location.

```
#include <iostream>

using namespace std;


int main(){


	int num = 10;

	// it is an int reference to num
	int& numRef = num;

	cout << numRef << endl; // prints 10

	// we can use references to change the variable
	numRef = 2;

	cout << numRef << endl; // prints 2

	cout << num << endl; // prints 2

	return 0;
}
```
One very common use of references is to allow a function to modify a variable directly.  
Observe the difference when passing by value or by reference.

```
#include <iostream>

using namespace std;


void duplicate(int & n) { n = n * 2; }

void sumTen(int n) { n += 10; }


int main(){


	int num = 2;

	// passing by reference
	duplicate(num);

	cout << num << endl; // prints 4


	// passing by value (function receives a copy)
	sumTen(num);

	// num is unchanged
	cout << num << endl;  // prints 4

	return 0;
}

```
Despite being very similar to pointers, there are important differences between references and pointers.

![table](https://images.prismic.io/turing/658bfd89531ac2845a26f428_reference_and_pointer_f329763242.webp?auto=format,compress)  
[image font](https://images.prismic.io/turing/658bfd89531ac2845a26f428_reference_and_pointer_f329763242.webp?auto=format,compress)  

# Switch statements
Switches are an alternative to if-else flow control. It evaluates a condition, that sould be an int or a char type, against several cases.  

```
#include <iostream>

using namespace std;


void testingSwitch(int num) {

	switch(num) {
		case 1:
			cout << "One" << endl; // in this case 'break' keyword finish the evaluations.
			break;
		case 2: 
			cout << "Two" << endl; // without 'break' keyword, once it fits a case it will run the code of all the next cases.
		case 3:
			cout << "Three" << endl;
		default:
			cout << "None" << endl; // it will run if no case fits the condition.
	}
}

int main(){

	cout << "First example, will stop evaluating on case 1" << endl;
	testingSwitch(1);

	cout << "Second example, will fit in case 2 and keep running the next cases and default." << endl;
	testingSwitch(2);

	cout << "Third example, not fitting any case, will run default code." << endl;
	testingSwitch(5);

	return 0;
}
```


# References:
[memory management](https://www.programiz.com/cpp-programming/memory-management)  
[pointers to members](https://jcodebook.com/pointer-to-members-in-cpp-an-introduction/)  
[references](https://www.geeksforgeeks.org/references-in-cpp/)  
[switch statements](https://www.geeksforgeeks.org/switch-statement-in-cpp/)

