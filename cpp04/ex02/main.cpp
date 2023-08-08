#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "Brain.hpp"

int main()
{

    Brain   *b3 = new Brain;
    Brain   *b4 = new Brain;
    // Cat     *d = new Cat;
    // Cat     *d2 = new Cat;
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
    *b3 = *b4;
    delete b3;
    delete b4;
}