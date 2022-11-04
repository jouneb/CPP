#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
WrongAnimal	Bob = WrongAnimal();
Cat 	Bernard = Cat();
Animal *Bernarde = &Bernard;
Dog	Bis = Dog();
WrongCat Tom = WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << Bob.getType() << " " << std::endl;
std::cout << Tom.getType() << " " << std::endl;
std::cout<<"Bernard's sound : ";
Bernard.makeSound();
std::cout<<"Bernarde's sound : ";
Bernarde->makeSound();
std::cout<<"Bis's sound : ";
Bis.makeSound();
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
Bob.makeSound();
delete meta;
delete j;
delete i;
return 0;
}