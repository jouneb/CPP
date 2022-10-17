/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:56:54 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/17 16:03:03 by jbouyer          ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &o, Fixed const& rhs); //cas partiuclier de << independant de la classe.

#endif