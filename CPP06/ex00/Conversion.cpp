/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:25:53 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/16 18:03:49 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include<string>
#include <stdio.h>

//COPPLIEN

Conversion::Conversion():_isFloat(false), _isChar(false), _isDouble(false),_isInt(false)
{
	return;
}
//manque = et par copie;
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
	if (input == "-inff" || input == "+inff")
	{
		this->_isFloat = true;
		return;
	}
	if (isdigit(input[0]) != 0 || input[0] == '-')
	{
		std::cout<<"coucou";
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
	std::cout<<this->_isFloat<<std::endl;
	if (this->_isFloat == true)
		std::cout<<"c;'est un float"<<std::endl;
}

void	Conversion::check_double(std::string  input)
{
	bool	isDot = false;
	bool	isDigit = true;

	if (input == "-inf" || input == "+inf" || input == "nan")
	{
		this->_isDouble = true;
		return;
	}
	if (isdigit(input[0]) != 0 || input[0] == '-')
	{
		std::cout<<"coucou";
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
	else if (this->_isDouble == true)
		std::cout<<"c;'est un Double"<<std::endl;
}

void	Conversion::check_char(std::string input)
{
	std::cout<<"Yooooooo"<<std::endl;
	std::cout<<input.size()<<std::endl;

	if (input.size() != 1  || isdigit(input[0]) == 0)
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
	std::string pos_input = input.substr(1, input.size());
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

	if (input[0] != '-' && input.compare("2147483647") > 0)
		std::cout<<" Int Overflow"<<std::endl;
		
	else if (input[0] == '-' && pos_input.compare("2147483648") > 0)
		std::cout<<" Int Overflowflow"<<std::endl;
}

void	Conversion::convert(char **input)
{
	check_char(input[1]);
	check_double(input[1]);
	check_float(input[1]);
	check_int(input[1]);
	if (this->_isChar == true)
		convertChar(*input);
	else if (this->_isFloat == true)
		convertFloat(*input);
	else if (this->_isDouble == true)
		convertDouble(*input);
	else if (this->_isInt == true)
		convertInt(*input);
	else
		std::cout<<"Invalid Type Args"<<std::endl;
}

void	Conversion::convertFloat(char *input)
{
	float	c ;
	sscanf(input, "%f", &c);
	int		b = static_cast<int>(c);
	char	a = static_cast<char>(c);
	double	d = static_cast<double>(c);

	std::cout<< " Char : "<< a <<std::endl;
	std::cout<<" Int : " << b <<std::endl;
	std::cout<<" Float : " << c <<std::endl;
	std::cout<<" Double : " <<  d <<std::endl;
}
void	Conversion::convertChar(char *input)
{
	char	a = input[0];
	int		b = static_cast<int>(a);
	float	c = static_cast<float>(a);
	double	d = static_cast<double>(a);

	std::cout<< " Char : "<< a <<std::endl;
	std::cout<<" Int : " << b <<std::endl;
	std::cout<<" Float : " << c <<std::endl;
	std::cout<<" Double : " <<  d <<std::endl;

}
void	Conversion::convertDouble(char *input)
{
	double	d;
	sscanf(input, "%lf", &d);
	int		b = static_cast<int>(d);
	char	a = static_cast<char>(d);
	float	c = static_cast<float>(d);

	std::cout<< " Char : "<< a <<std::endl;
	std::cout<<" Int : " << b <<std::endl;
	std::cout<<" Float : " << c <<std::endl;
	std::cout<<" Double : " <<  d <<std::endl;
}
void	Conversion::convertInt(char *input)
{
	int		b ;
	sscanf(input, "%i", &b);
	double	d= static_cast<double>(b);
	char	a = static_cast<char>(b);
	float	c = static_cast<double>(b);

	std::cout<< " Char : "<< a <<std::endl;
	std::cout<<" Int : " << b <<std::endl;
	std::cout<<" Float : " << c <<std::endl;
	std::cout<<" Double : " <<  d <<std::endl;
}