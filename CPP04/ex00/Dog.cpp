
# include <iostream>

class Animal
{
	public :
	virtual void announce();
};


class Dog : public Animal
{
	public :
	virtual void announce();
};

void 	Animal::announce()
{
	std::cout << "salut je suis l'Animal"<<std::endl;
	return;
}

void 	Dog::announce()
{
	std::cout << "Salut je suis le Chien" << std::endl;
	return;
}

int main()
{
	Dog Bernard = Dog();
	Animal Lol = Bernard;
	Bernard.announce();
	Lol.announce();
	return(0);
}