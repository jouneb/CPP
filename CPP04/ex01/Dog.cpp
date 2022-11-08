/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:19:19 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/08 15:09:13 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout<<"Dog constructor Called"<<std::endl;
	return;
}

Dog::Dog(Dog const &copy) : Animal(copy), _brain(new Brain())
{
	std::cout<<"Dog copy constructor Called"<<std::endl;
	*this = copy;
	return;
}

Dog::~Dog()
{
	std::cout<<"Dog Destructor Called"<<std::endl;
	delete this->_brain;
	return;
}

Dog&	Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{	
		Animal::operator=(rhs);
		*(this->_brain) = *(rhs._brain);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout<<"My Sound is : WAf WAF" <<std::endl;
}

Brain*	Dog::GetBrain() const
{
	return(this->_brain);
}