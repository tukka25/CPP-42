#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{

	// Animal	*i = new Animal;
	Dog	*j = new Dog;
	Cat	*h = new Cat;

	j->makeSound();
	h->makeSound();
    // const WrongAnimal* wa = new WrongAnimal();
    // const WrongCat* wc = new WrongCat();
    // const WrongDog* wd = new WrongDog();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // wa->makeSound();
    // wc->makeSound();
    // wd->makeSound();
//     delete meta;
//     delete j;
//     delete i;
}