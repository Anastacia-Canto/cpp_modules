# Cast

Casting is a way of transform a data type n another data type. Sometimes it is done explicitly like this:
```
#include <iostream>
using namespace std;

int main(){
	char a = 'a';

	cout << typeid(a).name() << endl; // prints 'c' to char

	double num = (double)a; // explicitly converting from char to double

	cout << typeid(num).name() << endl; // prints 'd' to double

	cout << num << endl;
} 
```

In C++ there are 4 types of casting that provide security and deal with more complex data types.

## static_cast

It is a safer form of explicity conversions. So in the example above, we should change '(double)' to 'static_cast<double>()'.

```
#include <iostream>
using namespace std;

int main(){

	char a = 'a';

	cout << typeid(a).name() << endl;

	double num = static_cast<double>(a); // using static_cast to converto from char to double

	cout << typeid(num).name() << endl;

	cout << num << endl;
	
	return 0;
}
```

## dynamic_cast

It is used to downcasting of objects. It can convert a pointer or reference to an object of a superclass into a potiner or reference to a subclass object. 

```
#include <iostream>
using namespace std;

class A {

	public: 
	virtual void whoAmI() { cout << "I am a superclass A" << endl; }
};

class B : public A {

	public: 
	void whoAmI() override { cout << "I am a subclass B" << endl; }
};


int main(){

	A *a = new B();

	B *b = dynamic_cast<B*>(a); // converting A* into B*

	b->whoAmI();

	delete a;

	
	return 0;
}


```

## const_cast
It is useful to temporarily remove constancy of an object.
```
#include <iostream>
#include <string>

using namespace std;


std::string concatOk(std::string & s) {
	return s + "ok";
}


int main(){

	const std::string str = "Hello World.";

	// compilation error because 'str' is const.
	//cout << concatOk(str) << endl; 

	cout << concatOk(const_cast<std::string&>(str)) << endl; // that works because of const_cast
	
	return 0;
}
```

## reinterpret_cast
It is used to convert a pointer to any other type of pointer.

```
#include <iostream>
using namespace std;

int main(){

	int * intPtr = new int(122);

	char *charPtr = reinterpret_cast<char *>(intPtr);

	cout << *intPtr << endl;
	cout << *charPtr << endl;
	
	return 0;
}

```

# References:
[casting](https://www.geeksforgeeks.org/casting-operators-in-cpp/)  
