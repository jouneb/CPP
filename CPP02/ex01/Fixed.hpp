/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:47:11 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/13 17:26:52 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
# include <math.h>

class Fixed
{
	private:
			int					_rawBits;
			static const int	_binaryPos;
	public:
			Fixed();
			Fixed(Fixed const &Fixed);
			Fixed(const int i);
			Fixed(const float f);
			~Fixed();
			Fixed& operator=(Fixed const &Fixed);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;
};

std::ostream	&operator <<(std::ostream & o, Type const & rhs);

#endif