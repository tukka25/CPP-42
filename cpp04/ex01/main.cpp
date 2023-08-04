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
	Animal	*l[10];
	for (int i = 0; i < 5; i++)
	{
		l[i] = new Dog();
	}
	for (int i = 5; i < 10; i++)
	{
		l[i] = new Cat();
	}
	int		i = 0;
	while (i < 10)
	{
		l[i]->makeSound();
		i++;
	}
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
    // delete j[];
    // delete h[];
	for(int i = 0; i < 10; i++)
	{
		delete l[i];
	}
}