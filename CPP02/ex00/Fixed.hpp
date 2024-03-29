/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:28:48 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/13 15:26:13 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
			int					_rawBits;
			static const int	_binaryPos;
	public:
			Fixed();
			Fixed(Fixed const &Fixed);
			~Fixed();
			Fixed& operator=(Fixed const &Fixed);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
};

#endif