/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:22:44 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/16 18:01:57 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

#include "Conversion.hpp"

int main(int argc, char **argv)
{
	Conversion convertor=Conversion();
	if (argc != 2)
	{	
		std::cout<< "Invalid arg" <<std::endl;
		return(0);
	}
	// convertor.check_float(argv[1]);
	// convertor.check_double(argv[1]);
	// convertor.check_char(argv[1]);
	// convertor.check_int(argv[1]);

	// if (convertor.getIsFloat() == true)
	// 	std::cout<< "c'est un flooooat" <<std::endl;


	// if (convertor.getIsDouble() == true)
	// 	std::cout<< "c'est un double" <<std::endl;
	// if (convertor.getIsChar() == true)
	// 	std::cout<< "c'est un char" <<std::endl;
	// if (convertor.getIsInt() == true)
	// 	std::cout<< "c'est un int" <<std::endl;

	convertor.convert(argv);
	if (convertor.getIsChar() == true)
		std::cout<<convertor.getIsChar()<<std::endl;
}	