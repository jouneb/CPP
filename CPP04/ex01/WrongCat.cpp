/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:05:50 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/04 14:34:05 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout<<"WrongCat constructor Called"<<std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
	std::cout<<"WrongCat copy constructor Called"<<std::endl;
	return;
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat Destructor Called"<<std::endl;
	return;
}

WrongCat&	WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout<<"My Sound is : Wrong Miaou Miaou" <<std::endl;
}
