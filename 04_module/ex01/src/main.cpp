
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"


int main( void ) {
    
    const Animal* animals[4] = { new Dog(), new Cat(), new Dog(), new Cat() };

	for (const Animal* animal : animals)  {
		std::cout << animal->getType() << std::endl;
		animal->makeSound();
	}

	for (const Animal* animal : animals)  {
		delete animal;
	}

	// Cat cat = Cat();
	// Dog dog = Dog();

	// cat.keepIdeas(cat.getBrain(), "Hello");
	// dog.keepIdeas(dog.getBrain(), "I am a dog.");
	// cat.keepIdeas(cat.getBrain(), "One more");
	// dog.keepIdeas(dog.getBrain(), "I think a lot.");
	// cat.openBrain(cat.getBrain());
	// dog.openBrain(dog.getBrain());

    return 0;
}