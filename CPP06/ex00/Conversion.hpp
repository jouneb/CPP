/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:16:24 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/17 16:54:04 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <string>
#include <iostream>

class Conversion
{
	private:
			bool	_isFloat;
			bool	_isChar;
			bool	_isDouble;
			bool	_isInt;

			char	_char;
			int		_int;
			float	_float;
			double	_double;

			std::string	_input;
			Conversion(Conversion const &copy);
			Conversion& operator=(Conversion &rhs);
	
	public:
			Conversion();
			~Conversion();
	
	void	convert(std::string	input);
	
	void	check_float(std::string	input);
	void	check_char(std::string	input);
	void	check_double(std::string	input);
	void	check_int(std::string	input);
	
	int		check_int_OF(std::string input);
	
	bool 	getIsFloat() const;
	bool 	getIsChar() const;
	bool 	getIsDouble() const;
	bool 	getIsInt() const;

	void	convertFloat(std::string input);
	void	convertChar(std::string input);
	void	convertDouble(std::string input);
	void	convertInt(std::string input);

	void	printChar();
	void	printDouble();
	void	printFloat();
	void 	printInt();
};
	
#endif 
