#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "Brain.hpp"

int main()
{

	// Animal	*i = new Animal;
	// Dog	*j = new Dog;
	// Cat	*h = new Cat;

	// j->makeSound();
	// h->makeSound();
    // Brain   *b1 = new Brain;
    // Brain   *b2 = new Brain;
    Animal *l[10];
    for (int i = 0; i < 5; i++)
    {
        l[i] = new Dog;
    }
    for (int i = 5; i < 10; i++)
    {
        l[i] = new Cat;
    }
    for (int i = 0; i < 10 ; i++)
    {
        l[i]->makeSound();
    }
    for (int i = 0; i < 10 ; i++)
    {
        delete l[i];
    }
    // b1->getIdeas();
    // b2 = b1;
    // b2->getIdeas();
    // delete b2;
    // delete b1;
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