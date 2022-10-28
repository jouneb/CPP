/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:58:16 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/27 16:52:48 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Animal Constructor Called" <<std::endl;
	return;
}

Animal::Animal(Animal const &copy)
{
	std::cout<<"Animal Copy Constructor Called"<<std::endl;
	*this = copy;
	return;
}

Animal::~Animal()
{
	std::cout<< "Animal Destructor Called" << std::endl;
	return;
}

Animal& Animal::operator=(Animal const &rhs)
{
	if ( this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

void	Animal::makeSound()
{
	std::cout<<"Animal Sound"<<std::endl;
}

const std::string		Animal::getType()
{
	return(this->_type);
}