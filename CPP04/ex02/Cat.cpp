/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:00:58 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/08 11:36:08 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
	std::cout<<"Cat constructor Called"<<std::endl;
	return;
}

Cat::Cat(Cat const &copy) : Animal(copy), _brain(new Brain())
{
	std::cout<<"Cat copy constructor Called"<<std::endl;
	*this = copy;
	return;
}

Cat::~Cat()
{
	std::cout<<"Cat Destructor Called"<<std::endl;
	delete this->_brain;
	return;
}

Cat&	Cat::operator=(Cat const &rhs)
{
	std::cout<<"Cat copy assignment operator called"<<std::endl;
	Animal::operator=(rhs);
	this->_brain = new Brain();
	return *this;
}

void	Cat::makeSound() const
{
	std::cout<<"My Sound is : Miaou" <<std::endl;
}
