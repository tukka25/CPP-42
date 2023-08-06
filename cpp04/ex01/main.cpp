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
	// Cat	*h = new ;

	// j->makeSound();
	// h->makeSound();
    // Brain   b1;
    // Brain   b2;
    Brain   *b3 = new Brain;
    Brain   *b4 = new Brain;
    Cat     *d = new Cat;
    Cat     *d2 = new Cat;
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
    // b1.getIdeas();
    // b2 = b2;
    // b2.getIdeas();
    // Brain *t = b4;
    *d = *d2;
    delete d;
    delete d2;
    b3->getIdeas();
    *b3 = *b4;
    b4->getIdeas();
    // (void)d;
    delete b3;
    delete b4;
    // delete t;
    // d = d2;
    // delete d;
    // delete d2;
    // delete b2;
    // const WrongAnimal* wa = new WrongAnimal();
    // const WrongCat* wc = new WrongCat();
    // const WrongDog* wd = new WrongDog();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // wa->makeSound();
}