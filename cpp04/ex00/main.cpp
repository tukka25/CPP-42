#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
   const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal b;
    Animal a(b);
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    delete meta;
    delete j;
    delete i;
}