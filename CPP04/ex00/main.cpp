#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
std::cout<<std::endl;
const Animal* DOg = new Dog();
std::cout<<std::endl;
const Animal* CAt = new Cat();
std::cout<<std::endl;
// WrongAnimal	Bob = WrongAnimal();
// std::cout<<std::endl;
// Cat 	Bernard = Cat();
// std::cout<<std::endl;
// Cat Bernarde = Bernard;
// std::cout<<std::endl;
// Dog	Bis = Dog();
// std::cout<<std::endl;
// WrongCat Tom = WrongCat();
std::cout<<std::endl;
std::cout << DOg->getType() << " " << std::endl;
std::cout << CAt->getType() << " " << std::endl;
std::cout << meta->getType() << " " << std::endl;
// std::cout << Bob.getType() << " " << std::endl;
// std::cout << Tom.getType() << " " << std::endl;
std::cout<<std::endl;
// std::cout<<"Bernard's sound : ";
// Bernard.makeSound();
// std::cout<<"Bernarde's sound : ";
// Bernarde.makeSound();
// std::cout<<"Bis's sound : ";
// Bis.makeSound();
std::cout<<"Cat's sound : ";
CAt->makeSound(); //will output the cat sound!
std::cout<<"DOg's sound : ";
DOg->makeSound();
std::cout<<"meta's sound : ";
meta->makeSound();
std::cout<<std::endl;
// std::cout<<"Bob's sound : ";
// Bob.makeSound();
delete meta;
delete DOg;
delete CAt;

WrongAnimal* wcat = new WrongCat();
wcat->makeSound();	
delete wcat;

return 0;
}