
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main( void ) {
    
    const Animal* animals[4] = { new Dog(), new Cat(), new Dog(), new Cat() };

	for (int i = 0; i < 4; i ++) {
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}

    return 0;
}