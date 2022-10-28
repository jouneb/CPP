/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:00:58 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/27 17:10:08 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _type("Cat")
{
	std::cout<<"Cat constructor Called"<<std::endl;
	return;
}

Cat::Cat(Cat const &copy)
{
	std::cout<<"Cat copy constructor Called"<<std::endl;
	*this = copy;
	return;
}

Cat::~Cat()
{
	std::cout<<"Cat Destructor Called"<<std::endl;
	return;
}

Cat&	Cat::operator=(Cat const &rhs)
{
	*this = rhs;
	return *this;
}

void	Cat::makeSound()
{
	std::cout<<"My Sound is :" << this->_type<<std::endl;
}

const std::string		Cat::getType()
{
	return(this->_type);
}