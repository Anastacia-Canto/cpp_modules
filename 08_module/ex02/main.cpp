
#include "MutantStack.hpp"
#include <vector>

int main(void) {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "last added: " << mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << "size after pop(): " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Iterating through stack and printing its elements: " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while(it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	// creating an original stack from MutantStack. 
	std::stack<int> s(mstack);

	// creating a MutantStack with different type of container
	MutantStack<int,std::vector<int> > myVectorStack;

	myVectorStack.push(10);
	myVectorStack.push(20);
	myVectorStack.push(30);
	myVectorStack.push(40);

	// creating a copy using copy constructor
	MutantStack<int,std::vector<int> > copy(myVectorStack);
	copy.pop();

	std::cout << "Iterating through copy (copy constructor) and printing its elements:" << std::endl;

	MutantStack<int, std::vector<int> >::iterator tb = copy.begin();
	MutantStack<int, std::vector<int> >::iterator te = copy.end();

	while (tb != te) {
		std::cout << "copy: " << *tb << std::endl;
		tb++;
	}

	// creating a copy using assignment operator
	MutantStack<int,std::vector<int> > other;

	other = myVectorStack;
	other.pop();

	std::cout << "Iterating through copy (assignment operator) and printing its elements:" << std::endl;
	MutantStack<int, std::vector<int> >::iterator ob = other.begin();
	MutantStack<int, std::vector<int> >::iterator oe = other.end();
	while (ob != oe) {
		std::cout << "other: " << *ob << std::endl;
		ob++;
	}

	std::cout << "Iterating through original and printing its elements:" << std::endl;
	MutantStack<int, std::vector<int> >::iterator ib = myVectorStack.begin();
	MutantStack<int, std::vector<int> >::iterator ie = myVectorStack.end();
	while (ib != ie) {
		std::cout << "original: " << *ib << std::endl;
		ib++;
	}

	std::cout << "-------------------------------------------------------------------------------" << std::endl;

	std::cout << "Testing replacing MutantStack with std::vector: " << std::endl;


	std::vector<int> testVector;

	testVector.push_back(5);
	testVector.push_back(17);

	std::cout << "last added: " << testVector.back() << std::endl;

	testVector.pop_back();
	
	std::cout << "size after pop(): " << testVector.size() << std::endl;

	testVector.push_back(3);
	testVector.push_back(5);
	testVector.push_back(737);
	testVector.push_back(0);

	std::cout << "Iterating through vector and printing its elements: " << std::endl;
	std::vector<int>::iterator vt = testVector.begin();
	std::vector<int>::iterator ve = testVector.end();

	++vt;
	--vt;
	while(vt != ve) {
		std::cout << *vt << std::endl;
		++vt;
	}



	return 0;
}