/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:51:31 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/13 15:27:49 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &copy) //forme habituelle d'un constructeur de recopie.
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
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

const int Fixed::_binaryPos = 8;