
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main( void ) {
    
    const Animal* animals[4] = { new Dog(), new Cat(), new Dog(), new Cat() };

	for (const Animal* animal : animals)  {
		delete animal;
	}

    return 0;
}