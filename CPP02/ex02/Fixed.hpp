/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:56:54 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/18 16:40:21 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	private:
			int					_rawBits;
			static const int	_binaryPos;
	public:
	
	//Constructors
			Fixed();
			Fixed(Fixed const &Fixed);
			Fixed(const int i);
			Fixed(const float f);
			~Fixed(); //Destructor
	


	//Accesseurs les getteurs sont toujours const.

			int		getRawBits(void) const;
			void	setRawBits(int const raw);			
			int		getBinaryPos(void) const;
	
	//Fonctions membres

			float	toFloat(void) const;
			int		toInt(void) const;
	
	//Surcharge operateur

			Fixed& operator=(Fixed const &Fixed);

			bool	operator<(Fixed const &rhs) const;
			bool	operator>(Fixed const &rhs) const;
			bool	operator>=(Fixed const &rhs) const;
			bool	operator<=(Fixed const &rhs) const;
			bool	operator==(Fixed const &rhs) const;
			bool	operator!=(Fixed const &rhs) const;
		

			Fixed	operator+(Fixed const &rhs) const;
			Fixed	operator-(Fixed const &rhs) const;
			Fixed	operator*(Fixed const &rhs) const;
			Fixed	operator/(Fixed const &rhs) const;

			Fixed& 	operator++(); //pre incrementation
			Fixed	operator++(int); //post incrementation
			Fixed&	operator--(); //predecrementation
			Fixed	operator--(int);
		
	//Static functions

	static Fixed&			min(Fixed& nb1, Fixed& nb2);
	static Fixed const&	 	min(Fixed const &nb1, Fixed const &nb2);
	static Fixed& 			max(Fixed& nb1, Fixed& nb2);
	static Fixed const&		max(Fixed const &nb1, Fixed const &nb2);

};

std::ostream &operator<<(std::ostream &o, Fixed const& rhs); //cas partiuclier de << independant de la classe.

#endif