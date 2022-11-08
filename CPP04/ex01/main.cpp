#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	// Animal*	animal[4];

	// animal[0] = new Dog();
	// std::cout << std::endl;
	// animal[1] = new Dog();
	// std::cout << std::endl;
	// animal[2] = new Cat();
	// std::cout << std::endl;
	// animal[3] = new Cat();
	// std::cout << std::endl;

	// for (int i = 0; i < 4; i++)
	// {
	// 	animal[i]->makeSound();
	// 	std::cout << std::endl;	
	// 	std::cout << std::endl;
	// }
	// Animal*	doggy = new Dog();
	// Animal* miou = new Cat();

	// *doggy = *animal[1];
	// *miou = *animal[3];

	// for (int i = 0; i < 4; i++)
	// 	delete animal[i];
	// delete doggy;
	// delete miou;

	Dog Lol = Dog();
	Dog Mdr = Lol;

	Lol.GetBrain()->SetIdeas("Manger", 0);
	std::cout<<Lol.GetBrain()->GetIdeas(0)<<std::endl;
	std::cout<<Mdr.GetBrain()->GetIdeas(0)<<std::endl;

	Dog xd = Lol;
	std::cout<<xd.GetBrain()->GetIdeas(0)<<std::endl;
	

return 0;
}