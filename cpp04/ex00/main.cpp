#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // Animal *a = new Animal();
    // Animal *c = new Animal();
    // Animal *d = new Animal();
    // Animal  n = *d;
    // Animal *Basic = new Dog;
    // Animal = *Basic;
    // (void)Basic;
    // // Dog tmp(*Basic);
    // Animal b(*a);
    // *c = *d;
    // delete a;
    // delete c;
    // delete d;
    Animal b;
    Animal a(b);
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