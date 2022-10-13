/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:50:06 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/13 17:19:47 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include <iostream>
# include <math.h>

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Fixed::Fixed(const int i):: _rawBits(0)
{
	std::cout << "Int constructor Called" << std::endl;
	this->_rawBits = i << this->_binaryPos;
	return;
}

Fixed::Fixed(const float f)::_rawBits(0)
{
	std::cout << "Float constructor Called" << std::endl;
	this->_rawBits = roundf(f * (1 << this->_binaryPos));
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout<< "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_rawBits = rhs.getRawBits();
	}
	return *this;
}

int		Fixed::getRawBits(void)	const
{
	std::cout << "getRwaBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

float	toFloat(void) const
{
	//doit convertir la  valeur en virgule fixe en nombre a virgule flottante.
	return ((float)this->_rawBits / (1 << this->_binaryPos));
}

int		Fixed::toInt(void) const
{
	return(this->_rawBits >> this->_binaryPos);
}

const int Fixed::_binaryPos = 8;