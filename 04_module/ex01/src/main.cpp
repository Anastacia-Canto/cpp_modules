
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"


int main( void ) {
    
    // const Animal* animals[4] = { new Dog(), new Cat(), new Dog(), new Cat() };

	// for (const Animal* animal : animals)  {
	// 	std::cout << animal->getType() << std::endl;
	// 	animal->makeSound();
	// }

	// for (const Animal* animal : animals)  {
	// 	delete animal;
	// }

	Cat cat = Cat();
	Dog dog = Dog();

	cat.keepIdeas("Hello");
	dog.keepIdeas("I am a dog.");
	cat.keepIdeas("One more");
	dog.keepIdeas("I think a lot.");
	cat.openBrain();
	dog.openBrain();

    return 0;
}