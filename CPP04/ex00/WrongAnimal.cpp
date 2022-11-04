/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:52:05 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/04 14:28:48 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "WrongAnimal Constructor Called" <<std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout<<"WrongAnimal Copy Constructor Called"<<std::endl;
	*this = copy;
	return;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type)
{
	std::cout<<"WrongAnimal Type Constructor Called"<<std::endl;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<< "WrongAnimal Destructor Called" << std::endl;
	return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if ( this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout<<"WrongAnimal Sound"<<std::endl;
}

std::string		WrongAnimal::getType() const 
{
	return(this->_type);
}