/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:25:53 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/17 16:58:28 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include<string>
#include <stdio.h>
#include<iomanip>



Conversion::Conversion():_isFloat(false), _isChar(false), _isDouble(false),_isInt(false)
{
	return;
}

Conversion::~Conversion()
{
	return;
}

//GETTERS

bool 	Conversion::getIsFloat() const
{
	return(this->_isFloat);
}
bool 	Conversion::getIsDouble() const
{
	return(this->_isDouble);
}
bool 	Conversion::getIsChar() const
{
	return(this->_isChar);
}
bool 	Conversion::getIsInt() const
{
	return(this->_isInt);
}

//CHECK FUNCTIONS

void	Conversion::check_float(std::string input)
{
	bool	isDot = false;
	bool	isDigit = true;;

	if (input[input.size()-1] != 'f') 
		return;
	if (input == "-inff" || input == "+inff" || input== "nanf"||input== "inff")
	{
		this->_isFloat = true;
		return;
	}
	if (isdigit(input[0]) != 0 || input[0] == '-')
	{
		for(size_t i=1; i < (input.size() - 1); i++)
			if (isdigit(input[i]) == 0 && input[i] != '.')
				isDigit = false;
			else if (input[i] == '.'&& isDot == false)
				isDot = true;
			else if (input[i] == '.'&& isDot == true)
				isDot = false;
	}
	if (isDot == true && isDigit == true)
		this->_isFloat = true;
}

void	Conversion::check_double(std::string  input)
{
	bool	isDot = false;
	bool	isDigit = true;

	if (input == "-inf" || input == "+inf" || input == "nan"|| input== "inf")
	{
		this->_isDouble = true;
		return;
	}
	if (isdigit(input[0]) != 0 || input[0] == '-')
	{
		for(size_t i=1; i < (input.size()); i++)
		{
			if (isdigit(input[i]) == 0 && input[i] != '.')
				isDigit = false;
			else if (input[i] == '.'&& isDot == false)
				isDot = true;
			else if (input[i] == '.'&& isDot == true)
				isDot = false;
		}
	}
	if (isDot == true && isDigit == true)
		this->_isDouble = true;
}

void	Conversion::check_char(std::string input)
{
	if (input.size() != 1  || isdigit(input[0]) != 0)
		return;
	else	
		this->_isChar = true;
			
}

void	Conversion::check_int(std::string input)
{
	if (input.size() == 1 && isdigit(input[0] == 0))
	{
		this->_isInt = true;
		return;
	}
	if(input[0] == '-' || isdigit(input[0]) != 0 )
	{
		for (size_t i=1; i < input.size(); i++)
		{
			if (isdigit(input[i]) == 0)
			{
				this->_isInt = false;
				return;
			}
		}
		this->_isInt=true;
	}
}
int		Conversion::check_int_OF(std::string input)
{
	std::string	nb2 = input;
	bool		is_negative = false;

	if (input[0] == '-')
	{
		nb2.erase(0,1);
		is_negative = true;
	}
	if (nb2.length() < 10)
		return(1);
	else if (nb2.length() > 10)
	{
		this->_isInt = false;
		return(0);
	}	
	else if (!is_negative && nb2.compare("2147483647") > 0)
	{
		this->_isInt = false;
		return(0);
	}
	else if (is_negative && nb2.compare("2147483648") > 0)
	{
		this->_isInt = false;
		return (0);
	}
	return(1);
}
void	Conversion::convert(std::string	input)
{
	this->_input = input;
	check_char(input);
	check_double(input);
	check_float(input);
	check_int(input);
	if (this->_isChar == true)
		convertChar(input);
	else if (this->_isFloat == true)
		convertFloat(input);
	else if (this->_isDouble == true)
		convertDouble(input);
	else if (this->_isInt == true)
	{
		if (check_int_OF(input) == 0)
		{
			std::cout<<"Int Overflow"<<std::endl;
			return;
		}
		convertInt(input);
	}
		
	else
		std::cout<<"Invalid Type Args"<<std::endl;
}

void	Conversion::convertFloat(std::string input)
{
	sscanf(input.c_str(), "%f", &this->_float);
	this->_int = static_cast<int>(this->_float);
	this->_char = static_cast<char>(this->_float);
	this->_double = static_cast<double>(this->_float);
	this->printFloat();
}
void	Conversion::convertChar(std::string input)
{
	
	this->_char = input[0];
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
	this->printChar();
}
void	Conversion::convertDouble(std::string input)
{
	sscanf(input.c_str(), "%lf", &this->_double);
	this->_int = static_cast<int>(this->_double);
	this->_char = static_cast<char>(this->_double);
	this->_float = static_cast<float>(this->_double);

	this->printDouble();
}
void	Conversion::convertInt(std::string input)
{
	sscanf(input.c_str(), "%i", &this->_int);
	this->_double= static_cast<double>(this->_int);
	this->_char= static_cast<char>(this->_int);
	this->_float = static_cast<double>(this->_int);
	this->printInt();
}

void	Conversion::printChar()
{
	std::cout<< " Char : "<< this->_char<<std::endl;
	std::cout<<" Int : " << this->_int <<std::endl;
	std::cout<<std::setprecision(1)<<std::fixed;
	std::cout<<" Float : "<<this->_float << "f" <<std::endl;
	std::cout<<" Double : " << this->_double <<std::endl;
}

void	Conversion::printFloat()
{
	if (this->_input == "nanf" || this->_input == "+inff" || this->_input == "inff" || this->_input == "-inff")
	{
		std::cout<< " Char : Impossible" <<std::endl;
		std::cout<<" Int : Impossible" <<std::endl;
		std::cout<<std::setprecision(1)<<std::fixed;
		std::cout<<" Float :" <<this->_float << "f"<<std::endl;
		std::cout<<" Double : " << this->_double <<std::endl;
	}
	else
	{
		if (this->_int < 32 || this->_int > 126)
			std::cout<< " Char : Non displayable" <<std::endl;
		else
			std::cout<< " Char : "<< this->_char <<std::endl;
		if (check_int_OF(this->_input) == 0)
			std::cout<<" Int : Overflow"  <<std::endl;
		else
		 std::cout<<" Int : " << this->_int <<std::endl;
		std::cout<<std::setprecision(1)<<std::fixed;
		std::cout<<" Float : "<<this->_float << "f" <<std::endl;
		std::cout<<" Double : " << this->_double <<std::endl;
	}
}

void 	Conversion::printInt()
{
	if (this->_int < 32 || this->_int > 126)
		std::cout<< " Char : Non displayable" <<std::endl;
	else
		std::cout<< " Char : "<< this->_char <<std::endl;
	if (check_int_OF(this->_input) == 0)
		std::cout<<" Int : Overflow"  <<std::endl;
	else
		std::cout<<" Int : " << this->_int <<std::endl;
	std::cout<<std::setprecision(1)<<std::fixed;
	std::cout<<" Float : " <<this->_float << "f" <<std::endl;
	std::cout<<" Double : " << this->_double <<std::endl;
}

void	Conversion::printDouble()
{
	if (this->_input == "nan" || this->_input == "+inf" || this->_input == "-inf"|| this->_input == "inf")
	{
		std::cout<< " Char : Impossible" <<std::endl;
		std::cout<<" Int : Impossible" <<std::endl;
		std::cout<<std::setprecision(1)<<std::fixed;
		std::cout<<" Float :" <<this->_double << "f" <<std::endl;
		std::cout<<" Double : " << this->_double <<std::endl;
	}
	else
	{
		if (this->_int < 32 || this->_int > 126)
			std::cout<< " Char : Non displayable"<<std::endl;
		else
			std::cout<< " Char : "<< this->_char <<std::endl;
		if (check_int_OF(this->_input) == 0)
			std::cout<<" Int : Overflow"  <<std::endl;
		else
			std::cout<<" Int : " << this->_int <<std::endl;
		std::cout<<std::setprecision(1)<<std::fixed;
		std::cout<<" Float : " <<this->_float << "f" <<std::endl;
		std::cout<<" Double : " << this->_double <<std::endl;
	}
}