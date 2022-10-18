/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:57:06 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/18 17:13:56 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <math.h>

int main( void )
{
	//Test operateurs arithmetiques
	Fixed	a(2.0215f);
	Fixed	b(5.5f);

	a = a + b;
	std::cout << "a = " << a << std::endl;
	a = a - b;
	std::cout << "a = " << a << std::endl;
	b = b * a;
	std::cout << "b = "<< b << std::endl;
	b = b / a;
	std::cout << "b = "<< b << std::endl;



	// Fixed		a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// Fixed const	c(4);
	// Fixed const d(6);

	// std::cout << Fixed::min(a,b) << std::endl;
	// std::cout << Fixed::max(a,b) << std::endl;
	// std::cout << Fixed::min(c,d) << std::endl;
	// std::cout << Fixed::max(c,d) << std::endl;
	// std::cout << a << std::endl;
	// std::cout << ++a<< std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << std::endl;
	// std::cout << --a<< std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;
	// ++a;
	// std::cout << a << std::endl;
	
return 0;

}