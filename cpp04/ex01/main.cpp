#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "Brain.hpp"

int main()
{
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
    Dog Basic;
    {
        Dog tmp = Basic;
    }
    Cat Basi;
    {
        Cat tmp = Basi;
    }
    Brain s;
    Brain k(s);
}