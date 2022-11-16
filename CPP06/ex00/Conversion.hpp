/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:16:24 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/16 18:02:31 by jbouyer          ###   ########.fr       */
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
	
	public:
			Conversion();
			~Conversion();
	
	void	convert(char **input);
	
	void	check_float(std::string	input);
	void	check_char(std::string	input);
	void	check_double(std::string	input);
	void	check_int(std::string	input);
	
	bool 	getIsFloat() const;
	bool 	getIsChar() const;
	bool 	getIsDouble() const;
	bool 	getIsInt() const;

	void	convertFloat(char *input);
	void	convertChar(char *input);
	void	convertDouble(char *input);
	void	convertInt(char *input);
};
	
#endif 
