/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:00:58 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/04 14:32:49 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout<<"Cat constructor Called"<<std::endl;
	return;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout<<"Cat copy constructor Called"<<std::endl;
	return;
}

Cat::~Cat()
{
	std::cout<<"Cat Destructor Called"<<std::endl;
	return;
}

Cat&	Cat::operator=(Cat const &rhs)
{
	std::cout<<"Cat copy assignment operator called"<<std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout<<"My Sound is : Miaou" <<std::endl;
}
