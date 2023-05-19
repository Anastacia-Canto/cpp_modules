
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main( void ) {
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete j;
    delete i;
    delete meta;

	/*-------------------- Wrong Cat ----------------------*/

	// const WrongAnimal* meta = new WrongAnimal();
    // const WrongAnimal* i = new WrongCat();

    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // meta->makeSound();

    // delete i;
    // delete meta;

    return 0;
}