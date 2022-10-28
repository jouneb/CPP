/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:00:58 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/27 17:10:08 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _type("Dog")
{
	std::cout<<"Dog constructor Called"<<std::endl;
	return;
}

Dog::Dog(Dog const &copy)
{
	std::cout<<"Dog copy constructor Called"<<std::endl;
	*this = copy;
	return;
}

Dog::~Dog()
{
	std::cout<<"Dog Destructor Called"<<std::endl;
	return;
}

Dog&	Dog::operator=(Dog const &rhs)
{
	*this = rhs;
	return *this;
}

void	Dog::makeSound()
{
	std::cout<<"My Sound is :" << this->_type<<std::endl;
}

std::string		Dog::getType()
{
	return(this->_type);
}