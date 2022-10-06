/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:28:48 by jbouyer           #+#    #+#             */
/*   Updated: 2022/10/06 16:12:37 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
			int					_nb;
			static const int	_int;
	public:
			Fixed();
			Fixed(Fixed const Fixed&);
			~Fixed();
			Fixed& operator=(Fixed const Fixed&);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
};

#endif;