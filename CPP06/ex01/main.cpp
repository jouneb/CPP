/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouyer <jbouyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:16:07 by jbouyer           #+#    #+#             */
/*   Updated: 2022/11/18 17:54:42 by jbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <stdint.h>

typedef struct
{
	int 	a;
	std::string	string;
			
}	Data;


uintptr_t	serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main()
{
	Data*  maData = new Data;
	uintptr_t	maData_raw = serialize(maData);
	std::cout << maData << std::endl;
	std::cout << maData_raw << std::endl;
	std::cout << deserialize(maData_raw) << std::endl;
	delete maData;
	return(0);
}


//uintptr_t is defined in c99 as an "an unsigned integer type with the property 
//that any valid pointer to void can be converted to this type, then converted back 
//to pointer to void, and the result will compare equal to the original pointer"."