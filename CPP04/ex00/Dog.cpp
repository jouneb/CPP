/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:19:19 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/08 12:27:59 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout<<"Dog constructor Called"<<std::endl;
	return;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
	std::cout<<"Dog copy constructor Called"<<std::endl;
	return;
}

Dog::~Dog()
{
	std::cout<<"Dog Destructor Called"<<std::endl;
	return;
}

Dog&	Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout<<" WAf WAF" <<std::endl;
}
