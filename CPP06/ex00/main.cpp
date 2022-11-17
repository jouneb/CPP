/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:22:44 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/17 16:58:43 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

#include "Conversion.hpp"

int main(int argc, char **argv)
{
	Conversion convertor;
	if (argc != 2)
	{	
		std::cout<< "Invalid arg" <<std::endl;
		return(0);
	}
	
	convertor.convert(argv[1]);
}	