/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:57:06 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/19 12:08:55 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <math.h>

int main( void )
{
	
	// Fixed	a(5.5f);
	// Fixed	b(7.5f);

	// //Test operateurs arithmetiques
	// a = a + b;
	// std::cout << std::endl;
	// std::cout << "\ttest operateurs arithmetiques" << std::endl;
	// std::cout << "a = " << a << std::endl;
	// a = a - b;
	// std::cout << "a = " << a << std::endl;
	// b = b * a;
	// std::cout << "b = "<< b << std::endl;
	// b = b / a;
	// std::cout << "b = "<< b << std::endl;

	// //Tests de comparaison 

	// std::cout << std::endl;
	// std::cout << "\ttest de comparaison" << std::endl;
	// std::cout << "a < b : " << (a < b ? "True" : "False") << std::endl;
	// std::cout << "a > b : " << (a > b ? "True" : "False") << std::endl;
	// std::cout << "a >= b : " << (a >= b ? "True" : "False") << std::endl;
	// std::cout << "a <= b : " << (a <= b ? "True" : "False") << std::endl;
	// std::cout << "a == b : " << (a == b ? "True" : "False") << std::endl;
	// std::cout << "a != b : " << (a != b ? "True" : "False") << std::endl;
	// std::cout << std::endl;

	// //Operateurs d'incrementation et decrementation.
	// std::cout << std::endl;
	// std::cout << "\ttest operateur incrementation decrementation" << std::endl;
	// std::cout << std::endl;
	// a = 1;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "a++ = " << a++ << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "a-- = " << a-- << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "++a= " << ++a << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "--a = " << --a << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << std::endl;

	// //Test fonctions membres surchargees.
	// std::cout << std::endl;
	// std::cout << "\ttest fonctions membres" << std::endl;
	// std::cout << std::endl;
	// Fixed const	c(4);
	// Fixed const d(6);
	// a = 5.25f;
	// b = 6.5f;
	// std::cout << "a = "<< a << std::endl;
	// std::cout << "b = "<< b << std::endl;
	// std::cout << "c = "<< c << std::endl;
	// std::cout << "d = "<< d << std::endl;
	// std::cout << "min = " << Fixed::min(a,b) << std::endl;
	// std::cout << "max = " << Fixed::max(a,b) << std::endl;
	// std::cout << "const min = " << Fixed::min(c,d) << std::endl;
	// std::cout << "const max = " << Fixed::max(c,d) << std::endl;
	// std::cout << std::endl;



	Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;

}